// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_NJSDYNAMICARRAY_HPP
#define DJINNI_GENERATED_NJSDYNAMICARRAY_HPP


#include "../include/../utils/optional.hpp"
#include "../include/DynamicType.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/DynamicArray.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDynamicArray final {
public:

    static void Initialize(Local<Object> target);
    NJSDynamicArray() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::DynamicArray> &object);
    static Nan::Persistent<ObjectTemplate> DynamicArray_prototype;

private:
    /**
     * Get count of values.
     * @return 64-bit integer
     */
    static NAN_METHOD(size);

    /**
     * Push a 32-bit integer.
     * @param value, 32-bit integer
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushInt);

    /**
     * Push a 64-bit integer.
     * @param value, 64-bit integer
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushLong);

    /**
     * Push a string.
     * @param value, string
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushString);

    /**
     * Push a double.
     * @param value, double
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushDouble);

    /**
     * Push a binary.
     * @param value, binary
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushData);

    /**
     * Push a bool.
     * @param value, bool
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushBoolean);

    /**
     * Push a dynamic object.
     * @param value, DynamicObject
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushObject);

    /**
     * Push a dynamic array.
     * @param value, DynamicArray
     * @return DynamicArray with value stored in it
     */
    static NAN_METHOD(pushArray);

    /**
     * Get a string at a given index.
     * @param index, 64-bit integer
     * @return Optional string
     */
    static NAN_METHOD(getString);

    /**
     * Get 32-bit integer at a given index.
     * @param index, 64-bit integer
     * @return Optional 32-bit integer
     */
    static NAN_METHOD(getInt);

    /**
     * Get 64-bit integer at a given index.
     * @param index, 64-bit integer
     * @return Optional 64-bit integer
     */
    static NAN_METHOD(getLong);

    /**
     * Get double at a given index.
     * @param index, 64-bit integer
     * @return Optional double
     */
    static NAN_METHOD(getDouble);

    /**
     * Get binary at a given index.
     * @param index, 64-bit integer
     * @return Optional binary
     */
    static NAN_METHOD(getData);

    /**
     * Get bool at a given index.
     * @param index, 64-bit integer
     * @return Optional bool
     */
    static NAN_METHOD(getBoolean);

    /**
     * Get DynamicObject object at a given index.
     * @param index, 64-bit integer
     * @return Optional DynamicObject
     */
    static NAN_METHOD(getObject);

    /**
     * Get DynamicArray object at a given index.
     * @param index, 64-bit integer
     * @return Optional DynamicArray
     */
    static NAN_METHOD(getArray);

    /**
     * Concatenate current DynamicArray with another one.
     * @param array, DynamicArray object to concatenate with
     * @return DynamicArray object, concatenated DynamicArray
     */
    static NAN_METHOD(concat);

    /**
     * Get type of value stored at a given index.
     * @param index, 64 bits integer
     * @return Optional DynamicType enum entry
     */
    static NAN_METHOD(getType);

    /**
     * Delete value stored at given index.
     * @param index, 64 bits integer
     * @return bool, true if deletion succeeded
     */
    static NAN_METHOD(remove);

    /**
     * Dump whole object's content as string.
     * @return string, the string representation of the array
     */
    static NAN_METHOD(dump);

    /**
     * Serialize whole object to a binary.
     * @return binary, the serialized array
     */
    static NAN_METHOD(serialize);

    /**
     * Get readonly status of object.
     * @return bool, whether the array is in read-only mode
     */
    static NAN_METHOD(isReadOnly);

    /**
     * Create a new instance of DynamicArray class.
     * @return DynamicArray, a brand new instance of a dynamic array
     */
    static NAN_METHOD(newInstance);

    /**
     * Parse a binary to a DynamicArray.
     * @param serialized, binary to parse
     * @return Optional, the unserialized dynamic array
     */
    static NAN_METHOD(load);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSDYNAMICARRAY_HPP

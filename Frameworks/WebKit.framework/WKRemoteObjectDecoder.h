
@interface WKRemoteObjectDecoder : NSCoder {
    const void * _allowedClasses;
    const void * _currentDictionary;
    struct RetainPtr<_WKRemoteObjectInterface> { 
        void *m_ptr; 
    }  _interface;
    const void * _objectStream;
    unsigned long long  _objectStreamPosition;
    SEL  _replyToSelector;
    const void * _rootDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)initWithInterface:(id)arg1 rootObjectDictionary:(const void*)arg2 replyToSelector:(SEL)arg3;
- (bool)requiresSecureCoding;

@end

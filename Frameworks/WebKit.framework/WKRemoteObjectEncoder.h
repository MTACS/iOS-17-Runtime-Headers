
@interface WKRemoteObjectEncoder : NSCoder {
    void * _currentDictionary;
    void * _objectStream;
    struct HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits> { 
        struct HashTable<NSObject *, NSObject *, WTF::IdentityExtractor, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTraits<NSObject *>> { 
            /* Warning: unhandled union encoding: '(?="m_table"^@"m_tableForLLDB"^I)}}' */ union { 
                m_tableForLLDB **m_table; 
            } ; 
        } m_impl; 
    }  _objectsBeingEncoded;
    struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> { 
        struct Dictionary {} *m_ptr; 
    }  _rootDictionary;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (id)init;
- (bool)requiresSecureCoding;
- (void*)rootObjectDictionary;

@end

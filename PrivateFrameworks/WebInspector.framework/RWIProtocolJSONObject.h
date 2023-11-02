
@interface RWIProtocolJSONObject : NSObject {
    struct RefPtr<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Object>> { 
        struct Object {} *m_ptr; 
    }  _object;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RefPtr<WTF::JSONImpl::Array, WTF::RawPtrTraits<WTF::JSONImpl::Array>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Array>> { struct Array {} *x1; })JSONArrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithJSONObject:(void*)arg1;
- (int)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setJSONArray:(void*)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (struct Ref<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>> { struct Object {} *x1; })toJSONObject;

@end


@interface NSWeakObjectValue : NSValue {
    id  _object;
    bool  _useFallback;
    void * _value;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqualToValue:(id)arg1;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (id)weakObjectValue;

@end

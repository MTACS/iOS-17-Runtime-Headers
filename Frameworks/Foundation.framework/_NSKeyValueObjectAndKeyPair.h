
@interface _NSKeyValueObjectAndKeyPair : NSObject <NSCopying> {
    void * _context;
    NSString * _key;
    id  _object;
    Class  _objectClass;
    unsigned long long  _objectPointer;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end

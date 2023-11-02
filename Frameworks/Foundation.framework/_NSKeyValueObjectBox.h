
@interface _NSKeyValueObjectBox : NSObject <NSCopying> {
    id  _object;
    Class  _objectClass;
    unsigned long long  _objectPointer;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)isEqual:(id)arg1;

@end

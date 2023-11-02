
@interface _UICompoundObjectMapKey : NSObject <NSCopying> {
    id  _object;
    NSString * _property;
}

+ (id)keyWithObject:(id)arg1 andProperty:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end

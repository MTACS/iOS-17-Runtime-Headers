
@interface _UIBarAppearanceData : NSObject <NSCopying> {
    bool  _immutable;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;

- (void)assertMutable:(SEL)arg1;
- (bool)checkEqualTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)describeInto:(id)arg1;
- (id)description;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (unsigned long long)hash;
- (long long)hashInto:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)markReadOnly;
- (id)replicate;
- (id)writableInstance;

@end

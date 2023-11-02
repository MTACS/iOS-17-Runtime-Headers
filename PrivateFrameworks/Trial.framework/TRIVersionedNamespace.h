
@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _compatibilityVersion;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned int compatibilityVersion;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;
+ (id)versionedNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersionedNamespace:(id)arg1;
- (id)name;

@end

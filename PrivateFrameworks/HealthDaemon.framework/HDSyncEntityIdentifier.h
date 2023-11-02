
@interface HDSyncEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {
    long long  _entityIdentifier;
    NSString * _schemaIdentifier;
}

@property (nonatomic, readonly) long long entityIdentifier;
@property (nonatomic, readonly, copy) NSString *schemaIdentifier;

+ (id)identifierWithSchema:(id)arg1 entity:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codableEntityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityIdentifier;
- (unsigned long long)hash;
- (id)initWithCodableEntityIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityIdentifier:(long long)arg1 schemaIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)schemaIdentifier;

@end


@interface GDEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _intValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly) long long entityClass;
@property (nonatomic, readonly) unsigned long long intValue;
@property (nonatomic, readonly) NSString *stringValue;

+ (long long)entityClassOffset;
+ (id)prefixedIdentifierStringForIdentifierString:(id)arg1;
+ (id)prefixedIdentifierStringForIdentifierValue:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)unprefixedIdentifierStringForIdentifierString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityClass;
- (id)graphObjectFromContext:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithValue:(unsigned long long)arg1;
- (unsigned long long)intValue;
- (id)stringValue;

@end

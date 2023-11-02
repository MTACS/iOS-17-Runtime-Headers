
@interface PKPayLaterLastUsedFundingSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterLastUsedFundingSource:(id)arg1;
- (unsigned long long)type;

@end

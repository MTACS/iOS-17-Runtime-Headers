
@interface HKVerifiableHealthRecordsParsingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _localizedTypeDisplayNames;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *localizedTypeDisplayNames;
@property (nonatomic, readonly) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 localizedTypeDisplayNames:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTypeDisplayNames;
- (unsigned long long)options;

@end

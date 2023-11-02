
@interface WCAFetchKeyValuesResponse : WCAFetchResponse {
    NSDictionary * _keyValues;
}

@property (nonatomic, copy) NSDictionary *keyValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyValues:(id)arg1;
- (id)keyValues;
- (void)setKeyValues:(id)arg1;

@end

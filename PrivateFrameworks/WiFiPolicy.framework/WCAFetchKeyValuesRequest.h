
@interface WCAFetchKeyValuesRequest : WCAFetchRequest {
    NSArray * _keys;
}

@property (nonatomic, copy) NSArray *keys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;

@end


@interface _HDRequiredShardItem : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _options;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

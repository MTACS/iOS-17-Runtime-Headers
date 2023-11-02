
@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding> {
    long long  _action;
    long long  _subAction;
    NSString * _version;
}

@property (nonatomic) long long action;
@property (nonatomic) long long subAction;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryResponse:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setSubAction:(long long)arg1;
- (void)setVersion:(id)arg1;
- (long long)subAction;
- (id)version;

@end

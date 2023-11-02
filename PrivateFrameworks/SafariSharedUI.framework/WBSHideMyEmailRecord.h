
@interface WBSHideMyEmailRecord : NSObject <NSSecureCoding> {
    NSString * _domain;
    NSString * _privateEmailAddress;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *privateEmailAddress;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 state:(unsigned long long)arg2 privateEmailAddress:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)privateEmailAddress;
- (unsigned long long)state;

@end


@interface AMSEngagementDestination : NSObject <NSSecureCoding> {
    bool  _allowsResponse;
    unsigned long long  _components;
    NSString * _identifier;
}

@property (nonatomic) bool allowsResponse;
@property (nonatomic) unsigned long long components;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsResponse;
- (unsigned long long)components;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setAllowsResponse:(bool)arg1;
- (void)setComponents:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;

@end

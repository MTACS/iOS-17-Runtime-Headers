
@interface SPSecureLocationsSubscriptionContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientApp;
    long long  _fetchMode;
    NSDictionary * _pushIdentifiers;
    long long  _subscriptionMode;
}

@property (nonatomic, copy) NSString *clientApp;
@property (nonatomic) long long fetchMode;
@property (nonatomic, retain) NSDictionary *pushIdentifiers;
@property (nonatomic) long long subscriptionMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientApp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fetchMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)pushIdentifiers;
- (void)setClientApp:(id)arg1;
- (void)setFetchMode:(long long)arg1;
- (void)setPushIdentifiers:(id)arg1;
- (void)setSubscriptionMode:(long long)arg1;
- (long long)subscriptionMode;

@end


@interface AMSUserNotificationAuthorizationResult : NSObject <NSSecureCoding> {
    long long  _authorizationStatus;
    AMSEngagementRequest * _request;
}

@property (nonatomic) long long authorizationStatus;
@property (nonatomic, retain) AMSEngagementRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setRequest:(id)arg1;

@end

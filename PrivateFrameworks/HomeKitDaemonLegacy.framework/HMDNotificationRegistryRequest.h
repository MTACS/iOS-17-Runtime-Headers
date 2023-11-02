
@interface HMDNotificationRegistryRequest : HMFObject {
    bool  _enable;
    long long  _retryCount;
    NSString * _userID;
}

@property (readonly) bool enable;
@property long long retryCount;
@property (readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)enable;
- (id)initWithEnable:(bool)arg1 userID:(id)arg2;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id)userID;

@end

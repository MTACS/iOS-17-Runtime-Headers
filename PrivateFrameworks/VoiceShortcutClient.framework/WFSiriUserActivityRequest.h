
@interface WFSiriUserActivityRequest : WFSiriActionRequest {
    NSString * _bundleIdentifier;
    NSData * _userActivityData;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, retain) NSData *userActivityData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivityData:(id)arg1 andBundleIdentifier:(id)arg2;
- (void)setUserActivityData:(id)arg1;
- (id)userActivity;
- (id)userActivityData;

@end

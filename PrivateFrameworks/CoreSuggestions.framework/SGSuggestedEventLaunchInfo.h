
@interface SGSuggestedEventLaunchInfo : NSObject <NSSecureCoding> {
    NSString * _bundleId;
    INIntent * _intent;
    NSString * _localizedShowInString;
    NSURL * _sourceURL;
    NSString * _userActivityString;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSString *localizedShowInString;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, retain) NSString *userActivityString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedShowInString:(id)arg2 userActivity:(id)arg3 intent:(id)arg4 sourceURL:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (id)localizedShowInString;
- (void)setUserActivityString:(id)arg1;
- (id)sourceURL;
- (id)userActivity;
- (id)userActivityString;

@end


@interface UAUserActivityProxy : NSObject <NSSecureCoding> {
    NSString * _activityType;
    NSString * _bundleIdentifier;
    NSString * _dynamicActivityType;
    NSUserActivity * _internalActivity;
    bool  _isRemoteActivity;
    UABestAppSuggestion * _suggestedActivity;
    NSUUID * _uuid;
}

@property (readonly) NSString *activityType;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *dynamicActivityType;
@property (retain) NSUserActivity *internalActivity;
@property (readonly) bool isRemoteActivity;
@property (retain) UABestAppSuggestion *suggestedActivity;
@property (copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)accessActivity:(id /* block */)arg1;
- (id)activityIfAvailible;
- (id)activitySubTitle;
- (id)activityTitle;
- (id)activityType;
- (id)bundleIdentifier;
- (id)contentAttributeSet;
- (id)description;
- (id)dynamicActivityType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1 bundleId:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithUUID:(id)arg1 activityType:(id)arg2 bundleID:(id)arg3;
- (id)initWithUUID:(id)arg1 activityType:(id)arg2 dynamicActivityType:(id)arg3 bundleID:(id)arg4;
- (id)internalActivity;
- (bool)isRemoteActivity;
- (void)launchActivityWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setInternalActivity:(id)arg1;
- (void)setSuggestedActivity:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)suggestedActivity;
- (id)uuid;

@end

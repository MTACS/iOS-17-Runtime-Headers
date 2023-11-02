
@interface INCAppLaunchRequest : NSObject <NSCopying> {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    NSDictionary * _options;
    bool  _retainsSiri;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) bool retainsSiri;
@property (getter=isSupportedInCarPlay, nonatomic, readonly) bool supportedInCarPlay;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (void)initialize;
+ (id)removeDenyListedApplicationProxies:(id)arg1;
+ (id)specialElementIdentifierForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLOverrideForURL:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAudioCallIntentForCarousel:(id)arg1 error:(id*)arg2;
- (id)initWithBundleIdentifier:(id)arg1 options:(id)arg2 URL:(id)arg3 userActivity:(id)arg4;
- (id)initWithBundleIdentifier:(id)arg1 options:(id)arg2 URL:(id)arg3 userActivity:(id)arg4 retainsSiri:(bool)arg5;
- (id)initWithIntent:(id)arg1 userActivity:(id)arg2 inBackground:(bool)arg3 error:(id*)arg4;
- (id)initWithIntent:(id)arg1 userActivity:(id)arg2 inBackground:(bool)arg3 retainsSiri:(bool)arg4 error:(id*)arg5;
- (id)initWithInteraction:(id)arg1 userActivity:(id)arg2 inBackground:(bool)arg3 error:(id*)arg4;
- (id)initWithInteraction:(id)arg1 userActivity:(id)arg2 inBackground:(bool)arg3 retainsSiri:(bool)arg4 error:(id*)arg5;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSupportedInCarPlay;
- (void)observeForAppLaunchWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)options;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (void)performWithService:(id)arg1 retainsSiri:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)retainsSiri;
- (id)userActivity;

@end

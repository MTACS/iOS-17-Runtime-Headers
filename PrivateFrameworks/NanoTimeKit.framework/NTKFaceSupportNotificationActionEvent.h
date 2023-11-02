
@interface NTKFaceSupportNotificationActionEvent : NSObject <NTKFaceSupportAnalyticsRepresentable> {
    long long  _action;
    NSString * _bundleIdentifier;
    double  _delayFromPresentation;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delayFromPresentation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ntkfs_analyticsEventName;
@property (nonatomic, readonly) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)action;
- (id)bundleIdentifier;
- (double)delayFromPresentation;
- (id)initWithBundleIdentifier:(id)arg1 action:(long long)arg2 delayFromPresentation:(double)arg3;
- (id)ntkfs_analyticsEventName;
- (id)ntkfs_analyticsJSONRepresentation;

@end

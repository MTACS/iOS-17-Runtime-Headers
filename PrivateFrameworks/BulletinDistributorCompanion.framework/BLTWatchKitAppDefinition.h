
@interface BLTWatchKitAppDefinition : NSObject {
    NSString * _containerBundleID;
    bool  _isInstalled;
    bool  _runsIndependently;
    NSString * _watchKitAppBundleID;
}

@property (nonatomic, readonly) NSString *containerBundleID;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool runsIndependently;
@property (nonatomic, readonly) NSString *watchKitAppBundleID;

- (void).cxx_destruct;
- (id)containerBundleID;
- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(bool)arg3 runsIndependently:(bool)arg4;
- (bool)isInstalled;
- (bool)runsIndependently;
- (id)watchKitAppBundleID;

@end

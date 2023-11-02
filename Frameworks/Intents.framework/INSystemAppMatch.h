
@interface INSystemAppMatch : NSObject {
    NSString * _iOSBundleIdentifier;
    NSString * _macOSBundleIdentifier;
    NSString * _watchOSBundleIdentifier;
}

@property (nonatomic, readonly) bool appIsUnavailableOnCurrentPlatform;
@property (nonatomic, readonly) NSString *bundleIdentifierForCurrentPlatform;
@property (nonatomic, readonly) NSString *iOSBundleIdentifier;
@property (nonatomic, readonly) NSString *macOSBundleIdentifier;
@property (nonatomic, readonly) NSString *watchOSBundleIdentifier;

+ (id)matchWithiOSBundleIdentifier:(id)arg1 macOSBundleIdentifier:(id)arg2 watchOSBundleIdentifier:(id)arg3;

- (void).cxx_destruct;
- (bool)appIsUnavailableOnCurrentPlatform;
- (id)bundleIdentifierForCurrentPlatform;
- (id)iOSBundleIdentifier;
- (id)initWithiOSBundleIdentifier:(id)arg1 macOSBundleIdentifier:(id)arg2 watchOSBundleIdentifier:(id)arg3;
- (id)macOSBundleIdentifier;
- (id)watchOSBundleIdentifier;

@end

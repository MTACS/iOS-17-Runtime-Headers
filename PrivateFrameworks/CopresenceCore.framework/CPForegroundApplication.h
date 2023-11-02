
@interface CPForegroundApplication : NSObject {
    void applicationType;
    void bundleIdentifier;
    void featureFlags;
}

@property (nonatomic, readonly) long long applicationType;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool isGameCenterApplication;
@property (nonatomic, readonly) NSString *localizedApplicationName;

- (void).cxx_destruct;
- (long long)applicationType;
- (id)bundleIdentifier;
- (id)init;
- (bool)isGameCenterApplication;
- (id)localizedApplicationName;

@end

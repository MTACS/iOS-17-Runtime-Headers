
@interface WLApp : NSObject {
    NSNumber * _appStoreIdentifier;
    NSString * _bundleIdentifier;
    bool  _isFree;
}

@property (nonatomic, retain) NSNumber *appStoreIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool isFree;

- (void).cxx_destruct;
- (id)appStoreIdentifier;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 appStoreIdentifier:(id)arg2 isFree:(bool)arg3;
- (bool)isFree;
- (void)setAppStoreIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIsFree:(bool)arg1;

@end

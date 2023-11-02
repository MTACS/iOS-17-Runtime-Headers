
@interface NTKApricotTritiumComplicationProvider : NSObject {
    NTKCompanionApricotComplicationManager * _companionManager;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)_init;
- (bool)vendorExistsWithContainerBundleIdentifier:(id)arg1;

@end

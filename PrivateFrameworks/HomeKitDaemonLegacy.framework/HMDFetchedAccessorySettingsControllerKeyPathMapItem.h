
@interface HMDFetchedAccessorySettingsControllerKeyPathMapItem : NSObject {
    <HMDFetchedSettingsDriver> * _driver;
    NSMutableArray * _keyPathsInternal;
}

@property (readonly) <HMDFetchedSettingsDriver> *driver;
@property (readonly) NSArray *keyPaths;

- (void).cxx_destruct;
- (id)driver;
- (id)initWithDriver:(id)arg1 keyPaths:(id)arg2;
- (id)keyPaths;

@end


@interface _GCDeviceOnDiskDB : NSObject {
    NSArray * _bundles;
    NSArray * _configurationBundles;
}

@property (readonly, copy) NSArray *configurationBundles;

- (void).cxx_destruct;
- (id)bestModelMatchingDevice:(id)arg1;
- (id)configurationBundles;
- (id)init;
- (id)initWithBundles:(id)arg1;

@end

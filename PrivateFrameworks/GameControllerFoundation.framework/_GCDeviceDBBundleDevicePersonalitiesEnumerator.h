
@interface _GCDeviceDBBundleDevicePersonalitiesEnumerator : NSEnumerator {
    NSBundle * _bundle;
    NSEnumerator * _personalitiesPaths;
}

- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 personalityPaths:(id)arg2;
- (id)nextObject;

@end


@interface GCControllerMetaDefaultsObserver : NSObject {
    NSUserDefaults * _metaDefaults;
}

@property (nonatomic, readonly) NSUserDefaults *metaDefaults;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)metaDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end


@interface _UIApplicationConfigurationLoader : NSObject {
    UISApplicationInitializationContext * _applicationInitializationContext;
    _Atomic bool  _hasRequestedPreload;
}

@property (nonatomic, readonly) UISApplicationInitializationContext *applicationInitializationContext;
@property (nonatomic, readonly) bool isFrontBoard;
@property (nonatomic, readonly) bool usesLocalInitializationContext;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)_appInitializationContextFactoryClass;
- (id)_init;
- (id)_loadInitializationContext;
- (id)applicationInitializationContext;
- (void)dealloc;
- (bool)isFrontBoard;
- (void)startPreloadInitializationContext;
- (bool)usesLocalInitializationContext;

@end

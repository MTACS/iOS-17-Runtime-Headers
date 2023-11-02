
@interface _EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding> {
    NSString * _bundleIdentifier;
    NSString * _containerBundleIdentifier;
    NSString * _containingViewControllerClassName;
    NSString * _runLoopType;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSString *containingViewControllerClassName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *runLoopType;
@property (readonly) Class superclass;

+ (id)extensionInfoForCurrentProcess;
+ (void)notifyExtensionMainCalled;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)containerBundleIdentifier;
- (id)containingViewControllerClassName;
- (id)initForCurrentProcess;
- (id)runLoopType;

@end

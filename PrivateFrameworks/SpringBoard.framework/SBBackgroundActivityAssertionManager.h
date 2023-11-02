
@interface SBBackgroundActivityAssertionManager : NSObject

@property (getter=_isLegacy, nonatomic, readonly) bool isLegacy;
@property (getter=_isModern, nonatomic, readonly) bool isModern;

+ (Class)_implementationClass;
+ (id)sharedInstance;

- (bool)_isLegacy;
- (bool)_isModern;
- (bool)handleTapForBackgroundActivityWithIdentifier:(id)arg1;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end

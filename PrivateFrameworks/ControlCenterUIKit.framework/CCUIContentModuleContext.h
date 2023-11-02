
@interface CCUIContentModuleContext : NSObject {
    <CCUIContentModuleContextDelegate> * _delegate;
    NSString * _moduleIdentifier;
}

@property (nonatomic) <CCUIContentModuleContextDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;

+ (id)_sharedOpenAppService;
+ (id)_sharedOpenApplicationOptions;
+ (bool)areAnimationsPermittedInWindow:(id)arg1;
+ (void)initialize;
+ (void)performWithoutAnimationWhileHiddenInWindow:(id)arg1 actions:(id /* block */)arg2;
+ (void)setAnimationsPermitted:(bool)arg1 inWindow:(id)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissControlCenter;
- (void)dismissModule;
- (void)enqueueStatusUpdate:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1;
- (id)moduleIdentifier;
- (struct CCUIModuleLayoutSize { unsigned long long x1; unsigned long long x2; })moduleLayoutSizeForOrientation:(long long)arg1;
- (void)openApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)requestExpandModule;
- (void)requestLayoutSizeUpdate;
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeGestureDismissalAllowed:(bool)arg1;

@end

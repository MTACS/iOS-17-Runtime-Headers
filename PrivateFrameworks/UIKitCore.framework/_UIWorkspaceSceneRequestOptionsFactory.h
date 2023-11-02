
@interface _UIWorkspaceSceneRequestOptionsFactory : NSObject {
    NSMutableDictionary * _buildersByRole;
    NSDictionary * _defaultBuildersByRole;
}

@property (nonatomic, retain) NSMutableDictionary *buildersByRole;
@property (nonatomic, retain) NSDictionary *defaultBuildersByRole;

+ (id)_createDefaultBuilders;
+ (id)sharedFactory;

- (void).cxx_destruct;
- (id)_effectiveBuilderForRole:(id)arg1;
- (id)_init;
- (void)_registerBuilder:(id)arg1 forRole:(id)arg2;
- (void)buildWorkspaceRequestOptionsForRequest:(id)arg1 withContinuation:(id /* block */)arg2;
- (id)buildersByRole;
- (id)defaultBuildersByRole;
- (void)setBuildersByRole:(id)arg1;
- (void)setDefaultBuildersByRole:(id)arg1;

@end


@interface KTOptInManager : NSObject {
    TransparencyApplication * _application;
    NSString * _applicationIdentifier;
}

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

+ (void)getOptInState:(id)arg1 completion:(id /* block */)arg2;
+ (id)notificationKeyForApplication:(id)arg1;

- (void).cxx_destruct;
- (id)application;
- (id)applicationIdentifier;
- (void)changeOptInState:(unsigned long long)arg1 detailedCompletionBlock:(id /* block */)arg2;
- (bool)getOptInState;
- (void)getOptInState:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)getOptInStateWithSync:(id /* block */)arg1;
- (id)initWithApplication:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setOptInState:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)setOptInState:(bool)arg1 detailedCompletionBlock:(id /* block */)arg2;

@end


@interface KTStatus : NSObject {
    TransparencyApplication * _application;
    NSString * _applicationIdentifier;
}

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)application;
- (id)applicationIdentifier;
- (void)errorForFailedEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)errorsForFailedEvents:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getCurrentStatus:(id /* block */)arg1;
- (void)getSelfStatus:(id /* block */)arg1;
- (void)getStatus:(id /* block */)arg1;
- (void)ignoreFailedEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)ignoreFailedEvents:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithApplication:(id)arg1;
- (void)setApplication:(id)arg1;

@end

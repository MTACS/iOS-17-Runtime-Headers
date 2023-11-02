
@interface MCMContainerSchemaActionBase : NSObject <MCMContainerSchemaAction> {
    MCMContainerSchemaContext * _context;
}

@property (nonatomic, readonly) MCMContainerSchemaContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_resolveArguments:(id)arg1 toPathArgument:(id*)arg2 context:(id)arg3;
+ (void)_resolveArguments:(id)arg1 toSourcePathArgument:(id*)arg2 destPathArgument:(id*)arg3 context:(id)arg4;
+ (id)actionIdentifier;
+ (id)actionWithName:(id)arg1 arguments:(id)arg2 context:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)backupFileURL:(id)arg1 error:(id*)arg2;
- (id)context;
- (id)description;
- (bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 error:(id*)arg2 duringBlock:(id /* block */)arg3;
- (id)initWithContext:(id)arg1;
- (bool)makedirAtURL:(id)arg1 followTerminalSymlink:(bool)arg2 error:(id*)arg3;
- (bool)performWithError:(id*)arg1;

@end

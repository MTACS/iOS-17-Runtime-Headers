
@interface MCMCommandDeleteUserManagedAsset : MCMCommand <MCMParametersDeleteUserManagedAsset> {
    MCMContainerIdentity * _containerIdentity;
    NSString * _sourceRelativePath;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) NSString *sourceRelativePath;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerIdentity;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)sourceRelativePath;

@end


@interface MCMCommandContainerFromPath : MCMCommand <MCMParametersWithURL> {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (struct container_object_s { }*)_containerFromRelayToDaemonWithURL:(id)arg1 relativePath:(char **)arg2 error:(struct container_error_extended_s {}**)arg3;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)url;

@end

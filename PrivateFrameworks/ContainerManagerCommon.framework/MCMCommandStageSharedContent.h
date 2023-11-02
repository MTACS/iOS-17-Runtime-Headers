
@interface MCMCommandStageSharedContent : MCMCommand <MCMParametersStageSharedContent> {
    NSString * _destinationRelativePath;
    NSString * _identifier;
    NSString * _sourceRelativePath;
}

@property (nonatomic, readonly) NSString *destinationRelativePath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *sourceRelativePath;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)destinationRelativePath;
- (void)execute;
- (id)identifier;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)sourceRelativePath;

@end

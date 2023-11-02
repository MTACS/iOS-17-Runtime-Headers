
@interface CEMManagementStateCommand_Status : CEMPayloadBase {
    NSArray * _statusCommands;
    NSArray * _statusDeclarations;
}

@property (nonatomic, copy) NSArray *statusCommands;
@property (nonatomic, copy) NSArray *statusDeclarations;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusCommands:(id)arg1;
- (void)setStatusDeclarations:(id)arg1;
- (id)statusCommands;
- (id)statusDeclarations;

@end

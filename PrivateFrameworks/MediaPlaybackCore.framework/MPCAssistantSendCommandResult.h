
@interface MPCAssistantSendCommandResult : NSObject {
    MRCommandResult * _commandResult;
    NSNumber * _devicesControlled;
    NSError * _error;
    NSArray * _returnStatuses;
}

@property (nonatomic, readonly) MRCommandResult *commandResult;
@property (nonatomic, copy) NSNumber *devicesControlled;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *returnStatuses;

- (void).cxx_destruct;
- (id)commandResult;
- (id)devicesControlled;
- (id)error;
- (id)initWithCommandResult:(id)arg1 error:(id)arg2;
- (id)initWithReturnStatuses:(id)arg1 error:(id)arg2;
- (id)returnStatuses;
- (void)setDevicesControlled:(id)arg1;

@end

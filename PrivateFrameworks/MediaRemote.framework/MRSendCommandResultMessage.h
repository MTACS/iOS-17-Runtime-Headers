
@interface MRSendCommandResultMessage : MRProtocolMessage {
    MRCommandResult * _commandResult;
}

@property (nonatomic, readonly) MRCommandResult *commandResult;

- (void).cxx_destruct;
- (id)commandResult;
- (id)initWithCommandID:(id)arg1 commandResult:(id)arg2;
- (unsigned int)sendError;
- (unsigned long long)type;

@end

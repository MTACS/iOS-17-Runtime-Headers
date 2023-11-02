
@interface TYRecapCommand : NSObject {
    NSString * _commandDescription;
    NSString * _commandString;
    int  _commandType;
    RCPSyntheticEventStream * _eventStream;
    double  _recapWaitOverrideInterval;
    bool  _requiresRecapWaitOverride;
}

@property (nonatomic, retain) NSString *commandDescription;
@property (nonatomic, retain) NSString *commandString;
@property (nonatomic) int commandType;
@property (nonatomic, retain) RCPSyntheticEventStream *eventStream;
@property (nonatomic) double recapWaitOverrideInterval;
@property (nonatomic) bool requiresRecapWaitOverride;

- (void).cxx_destruct;
- (id)commandDescription;
- (id)commandString;
- (int)commandType;
- (id)description;
- (id)eventStream;
- (id)initWithCommandType:(int)arg1 commandString:(id)arg2 commandDescription:(id)arg3;
- (double)recapWaitOverrideInterval;
- (bool)requiresRecapWaitOverride;
- (void)setCommandDescription:(id)arg1;
- (void)setCommandString:(id)arg1;
- (void)setCommandType:(int)arg1;
- (void)setEventStream:(id)arg1;
- (void)setRecapWaitOverrideInterval:(double)arg1;
- (void)setRequiresRecapWaitOverride:(bool)arg1;
- (void)updateCommand:(int)arg1 commandString:(id)arg2 commandDescription:(id)arg3;

@end

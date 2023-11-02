
@interface CLSCurationDebugObject : NSObject {
    unsigned long long  _state;
    unsigned long long  _stateAtBeginningOfTentativeSection;
    NSMutableArray * _stateHistory;
    unsigned long long  _tentativeSectionStateHistoryLength;
}

@property (readonly) unsigned long long state;
@property (readonly) NSArray *stateHistory;

+ (id)stringForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)beginTentativeSection;
- (id)dictionaryRepresentation;
- (void)endTentativeSectionWithSuccess:(bool)arg1;
- (id)init;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4;
- (unsigned long long)state;
- (id)stateHistory;
- (id)timestamp;

@end

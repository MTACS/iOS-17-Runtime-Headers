
@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    NSMutableArray * _childIOEvents;
    unsigned long long  _endSampleIndex;
    unsigned int  _microstackshotState;
    int  _onBehalfOfPid;
    int  _pid;
    unsigned long long  _state;
    unsigned long long  _threadId;
    unsigned char  _threadPriority;
    NSMutableArray * _timeRanges;
    SATurnstileInfo * _turnstileInfo;
    SAWaitInfo * _waitInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithWaitInfo:(id)arg1 turnstileInfo:(id)arg2 state:(unsigned long long)arg3 microstackshotState:(unsigned int)arg4 pid:(int)arg5 threadId:(unsigned long long)arg6 threadPriority:(unsigned char)arg7 timeRange:(id)arg8 onBehalfOfPid:(int)arg9 startSampleIndex:(unsigned long long)arg10 sampleCount:(unsigned long long)arg11;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end

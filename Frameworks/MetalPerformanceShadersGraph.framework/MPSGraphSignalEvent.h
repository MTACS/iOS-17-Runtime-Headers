
@interface MPSGraphSignalEvent : MPSGraphObject {
    <MTLSharedEvent> * _event;
    unsigned long long  _executionStage;
    unsigned long long  _value;
}

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 executionStage:(unsigned long long)arg2 value:(unsigned long long)arg3;

@end

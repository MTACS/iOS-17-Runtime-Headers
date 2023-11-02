
@interface MPSGraphWaitEvent : MPSGraphObject {
    <MTLSharedEvent> * _event;
    unsigned long long  _value;
}

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 value:(unsigned long long)arg2;

@end

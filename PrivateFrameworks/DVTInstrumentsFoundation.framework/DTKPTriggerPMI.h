
@interface DTKPTriggerPMI : DTKPTrigger {
    NSString * _pmiEventNameOrAlias;
    unsigned long long  _thresholdCount;
}

@property (nonatomic, readonly, retain) NSString *pmiEventNameOrAlias;
@property (nonatomic, readonly) unsigned long long thresholdCount;

- (void).cxx_destruct;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long*)arg1;
- (id)pmiEventNameOrAlias;
- (int)setPMIEventNamed:(id)arg1 threshold:(unsigned long long)arg2 error:(id*)arg3;
- (int)start:(id*)arg1;
- (int)stop:(id*)arg1;
- (unsigned long long)thresholdCount;
- (unsigned long long)triggerKind;

@end

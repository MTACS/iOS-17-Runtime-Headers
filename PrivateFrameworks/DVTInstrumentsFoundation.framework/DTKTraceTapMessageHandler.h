
@interface DTKTraceTapMessageHandler : DTTapMessageHandler {
    unsigned int  _coreCount;
    <DVTInputStream><DVTOutputStream> * _datastream;
    NSMutableArray * _rawMessages;
    unsigned int  _tapVersion;
    long long  _triggerCount;
    unsigned int * _triggerIDs;
}

- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;
- (id)messageReceived:(id)arg1;

@end

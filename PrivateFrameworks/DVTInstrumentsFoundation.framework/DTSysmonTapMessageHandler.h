
@interface DTSysmonTapMessageHandler : DTTapMessageHandler {
    NSData * _nextSampleData;
    unsigned int  _tapVersion;
}

- (void).cxx_destruct;
- (id)messageReceived:(id)arg1;

@end

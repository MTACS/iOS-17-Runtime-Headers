
@interface HMDDataSyncStateLogEvent : HMMLogEvent {
    unsigned long long  _dataSyncState;
}

@property (readonly) unsigned long long dataSyncState;

- (unsigned long long)dataSyncState;
- (id)initWithDataSyncState:(unsigned long long)arg1;

@end

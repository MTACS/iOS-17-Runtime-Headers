
@interface CSAudioStreamHolding : NSObject {
    unsigned long long  _clientIdentity;
    NSString * _listeningMicIndicatorLockUUIDString;
    NSString * _name;
    NSString * _recordModeLockUUIDString;
}

@property (nonatomic, readonly) unsigned long long clientIdentity;
@property (nonatomic, retain) NSString *listeningMicIndicatorLockUUIDString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *recordModeLockUUIDString;

- (void).cxx_destruct;
- (unsigned long long)clientIdentity;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientIdentity:(unsigned long long)arg2;
- (id)listeningMicIndicatorLockUUIDString;
- (id)name;
- (id)recordModeLockUUIDString;
- (void)setListeningMicIndicatorLockUUIDString:(id)arg1;
- (void)setRecordModeLockUUIDString:(id)arg1;

@end

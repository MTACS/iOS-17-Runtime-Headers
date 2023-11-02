
@interface BLSHEnvironmentUpdateData : NSObject {
    NSString * _environmentIdentifier;
    long long  _newBacklightState;
    unsigned long long  _pendingTransitionStateCount;
    unsigned long long  _timeStamp;
}

@property (nonatomic, readonly, copy) NSString *environmentIdentifier;
@property (nonatomic, readonly) long long newBacklightState;
@property (nonatomic, readonly) unsigned long long pendingTransitionStateCount;
@property (nonatomic, readonly) unsigned long long timeStamp;

- (void).cxx_destruct;
- (id)description;
- (id)environmentIdentifier;
- (id)initWithEnvironmentIdentifier:(id)arg1 newBacklightState:(long long)arg2 pendingTransitionStateCount:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)newBacklightState;
- (unsigned long long)pendingTransitionStateCount;
- (unsigned long long)timeStamp;

@end

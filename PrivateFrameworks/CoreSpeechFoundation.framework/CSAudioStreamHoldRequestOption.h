
@interface CSAudioStreamHoldRequestOption : NSObject {
    unsigned long long  _clientIdentity;
    bool  _requireListeningMicIndicatorLock;
    bool  _requireRecordModeLock;
    double  _timeout;
}

@property (nonatomic, readonly) unsigned long long clientIdentity;
@property (nonatomic, readonly) bool requireListeningMicIndicatorLock;
@property (nonatomic, readonly) bool requireRecordModeLock;
@property (nonatomic, readonly) double timeout;

+ (id)defaultOptionWithTimeout:(double)arg1;

- (unsigned long long)clientIdentity;
- (id)initWithTimeout:(double)arg1 clientIdentity:(unsigned long long)arg2 requireRecordModeLock:(bool)arg3 requireListeningMicIndicatorLock:(bool)arg4;
- (id)initWithXPCObject:(id)arg1;
- (bool)requireListeningMicIndicatorLock;
- (bool)requireRecordModeLock;
- (double)timeout;
- (id)xpcObject;

@end

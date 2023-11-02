
@interface SCLSettingsSyncErrorBehavior : NSObject {
    unsigned long long  _recoveryType;
    long long  _retryInterval;
}

@property (nonatomic, readonly) unsigned long long recoveryType;
@property (nonatomic, readonly) long long retryInterval;

- (id)initWithRecoveryType:(unsigned long long)arg1 retryInterval:(long long)arg2;
- (unsigned long long)recoveryType;
- (long long)retryInterval;

@end

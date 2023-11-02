
@interface CSSiriFanInfo : NSObject {
    long long  _currentSpeed;
    unsigned long long  _fanId;
    long long  _targetSpeed;
}

@property (nonatomic) long long currentSpeed;
@property (nonatomic) unsigned long long fanId;
@property (nonatomic) long long targetSpeed;

- (long long)currentSpeed;
- (unsigned long long)fanId;
- (void)setCurrentSpeed:(long long)arg1;
- (void)setFanId:(unsigned long long)arg1;
- (void)setTargetSpeed:(long long)arg1;
- (long long)targetSpeed;

@end

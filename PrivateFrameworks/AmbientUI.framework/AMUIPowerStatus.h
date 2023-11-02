
@interface AMUIPowerStatus : NSObject {
    int  _chargeState;
    double  _powerPercent;
    unsigned long long  _powerStatus;
}

@property (nonatomic) int chargeState;
@property (nonatomic) double powerPercent;
@property (nonatomic) unsigned long long powerStatus;

- (int)chargeState;
- (id)init;
- (double)powerPercent;
- (unsigned long long)powerStatus;
- (void)setChargeState:(int)arg1;
- (void)setPowerPercent:(double)arg1;
- (void)setPowerStatus:(unsigned long long)arg1;

@end

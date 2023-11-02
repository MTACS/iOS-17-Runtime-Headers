
@interface HKElectrocardiogramVoltageMeasurement : NSObject <NSCopying> {
    HKQuantity * _leadIVoltage;
    double  _timeSinceSampleStart;
}

@property (nonatomic, readonly) double timeSinceSampleStart;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLeadIVoltage:(id)arg1 timeSinceSampleStart:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)quantityForLead:(long long)arg1;
- (double)timeSinceSampleStart;

@end

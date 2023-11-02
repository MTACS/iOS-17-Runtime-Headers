
@interface _HKBloodPressureWrapper : NSObject {
    HKStatistics * _diastolic;
    HKStatistics * _systolic;
}

@property (nonatomic, retain) HKStatistics *diastolic;
@property (nonatomic, retain) HKStatistics *systolic;

- (void).cxx_destruct;
- (id)diastolic;
- (void)setDiastolic:(id)arg1;
- (void)setSystolic:(id)arg1;
- (id)systolic;

@end

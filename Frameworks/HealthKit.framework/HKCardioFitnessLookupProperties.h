
@interface HKCardioFitnessLookupProperties : NSObject {
    long long  _age;
    long long  _biologicalSex;
    HKQuantity * _vo2MaxQuantity;
}

@property (nonatomic) long long age;
@property (nonatomic) long long biologicalSex;
@property (nonatomic, copy) HKQuantity *vo2MaxQuantity;

- (void).cxx_destruct;
- (long long)age;
- (long long)biologicalSex;
- (void)setAge:(long long)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setVo2MaxQuantity:(id)arg1;
- (id)vo2MaxQuantity;

@end

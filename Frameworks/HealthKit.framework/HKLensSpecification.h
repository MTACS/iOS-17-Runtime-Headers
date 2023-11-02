
@interface HKLensSpecification : NSObject {
    HKQuantity * _addPower;
    HKQuantity * _axis;
    HKQuantity * _cylinder;
    HKQuantity * _sphere;
}

@property (nonatomic, readonly, copy) HKQuantity *addPower;
@property (nonatomic, readonly, copy) HKQuantity *axis;
@property (nonatomic, readonly, copy) HKQuantity *cylinder;
@property (nonatomic, readonly, copy) HKQuantity *sphere;

- (void).cxx_destruct;
- (id)_initWithSphere:(id)arg1 cylinder:(id)arg2 axis:(id)arg3 addPower:(id)arg4;
- (id)addPower;
- (id)axis;
- (id)cylinder;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)sphere;

@end

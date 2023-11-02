
@interface MSHistoryEvDirectionsItem : MSHistoryDirectionsItem {
    void _requiredCharge;
    void _vehicleIdentifier;
}

@property (nonatomic) double requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 requiredCharge:(double)arg2 vehicleIdentifier:(id)arg3;
- (double)requiredCharge;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setRequiredCharge:(double)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (id)vehicleIdentifier;

@end

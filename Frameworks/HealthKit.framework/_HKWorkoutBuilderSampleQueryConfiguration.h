
@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration {
    bool  _deliverQuantities;
    bool  _needsHistoricalData;
    NSUUID * _workoutBuilderIdentifier;
}

@property (nonatomic) bool deliverQuantities;
@property (nonatomic) bool needsHistoricalData;
@property (nonatomic, copy) NSUUID *workoutBuilderIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverQuantities;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsHistoricalData;
- (void)setDeliverQuantities:(bool)arg1;
- (void)setNeedsHistoricalData:(bool)arg1;
- (void)setWorkoutBuilderIdentifier:(id)arg1;
- (id)workoutBuilderIdentifier;

@end

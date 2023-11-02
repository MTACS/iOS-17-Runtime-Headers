
@interface HKUserTrackedMedication : HKUserTrackedConcept {
    bool  _hasSchedule;
    bool  _isArchived;
    HKMedication * _medication;
    NSString * _nickname;
}

@property (nonatomic, readonly) bool hasSchedule;
@property (nonatomic, readonly) bool isArchived;
@property (nonatomic, readonly, copy) HKMedication *medication;
@property (nonatomic, readonly, copy) NSString *nickname;

+ (bool)isConcreteUserTrackedConceptClass;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)userTrackedMedicationWithNickname:(id)arg1 isArchived:(bool)arg2 hasSchedule:(bool)arg3 medication:(id)arg4 device:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSchedule;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isArchived;
- (bool)isEquivalent:(id)arg1;
- (id)medication;
- (id)nickname;

@end

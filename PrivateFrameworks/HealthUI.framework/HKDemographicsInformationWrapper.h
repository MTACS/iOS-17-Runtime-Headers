
@interface HKDemographicsInformationWrapper : NSObject {
    HKBiologicalSexObject * _biologicalSexObject;
    HKBloodTypeObject * _bloodTypeObject;
    HKCardioFitnessMedicationsUseObject * _cardioFitnessMedicationsUseObject;
    NSDateComponents * _dateOfBirthComponents;
    NSArray * _emailAddresses;
    NSString * _firstName;
    HKFitzpatrickSkinTypeObject * _fitzpatrickSkinTypeObject;
    HKQuantity * _heightQuantity;
    NSString * _lastName;
    NSString * _middleName;
    NSArray * _postalAddresses;
    HKQuantity * _weightQuantity;
    HKWheelchairUseObject * _wheelchairUseObject;
}

@property (nonatomic, copy) HKBiologicalSexObject *biologicalSexObject;
@property (nonatomic, copy) HKBloodTypeObject *bloodTypeObject;
@property (nonatomic, copy) HKCardioFitnessMedicationsUseObject *cardioFitnessMedicationsUseObject;
@property (nonatomic, copy) NSDateComponents *dateOfBirthComponents;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject;
@property (nonatomic, copy) HKQuantity *heightQuantity;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSArray *postalAddresses;
@property (nonatomic, copy) HKQuantity *weightQuantity;
@property (nonatomic, copy) HKWheelchairUseObject *wheelchairUseObject;

- (void).cxx_destruct;
- (id)biologicalSexObject;
- (id)bloodTypeObject;
- (id)cardioFitnessMedicationsUseObject;
- (id)dateOfBirthComponents;
- (id)emailAddresses;
- (id)firstName;
- (id)fitzpatrickSkinTypeObject;
- (id)heightQuantity;
- (id)lastName;
- (id)middleName;
- (id)postalAddresses;
- (void)setBiologicalSexObject:(id)arg1;
- (void)setBloodTypeObject:(id)arg1;
- (void)setCardioFitnessMedicationsUseObject:(id)arg1;
- (void)setDateOfBirthComponents:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFitzpatrickSkinTypeObject:(id)arg1;
- (void)setHeightQuantity:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setWeightQuantity:(id)arg1;
- (void)setWheelchairUseObject:(id)arg1;
- (id)weightQuantity;
- (id)wheelchairUseObject;

@end

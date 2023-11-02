
@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate> {
    NSMutableDictionary * _dataEntryItems;
    NSDateComponents * _dateOfBirthComponents;
    <WDBuddyFlowUserInfoDelegate> * _delegate;
    NSString * _firstName;
    NSNumber * _heightInCm;
    NSString * _lastName;
    NSNumber * _originalHeightInCm;
    NSNumber * _originalWeightInKg;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _sex;
    NSNumber * _weightInKg;
}

@property (nonatomic, retain) NSDateComponents *dateOfBirthComponents;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDBuddyFlowUserInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *heightInCm;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSNumber *originalHeightInCm;
@property (nonatomic, retain) NSNumber *originalWeightInKg;
@property (nonatomic, retain) NSNumber *sex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *weightInKg;

+ (id)buddyFlowUserInfoWithDemographicsInformation:(id)arg1;

- (void).cxx_destruct;
- (id)_createDateOfBirthEntryItem;
- (id)_createSexEntryItem;
- (id)_dataEntryItemForRegistrantField:(unsigned long long)arg1;
- (id)_medicalIDName;
- (id)_todayBirthdayDateComponents;
- (void)dataEntryItemDidUpdateValue:(id)arg1;
- (id)dateOfBirthComponents;
- (id)defaultDataEntryItems;
- (id)delegate;
- (id)firstName;
- (id)heightInCm;
- (id)init;
- (id)lastName;
- (id)medicalIDRepresentation;
- (id)originalHeightInCm;
- (id)originalWeightInKg;
- (void)saveChangesToHealthStore:(id)arg1 withMedicalIDTemplate:(id)arg2 withMedicalIDCompletion:(id /* block */)arg3 andSaveNameCompletion:(id /* block */)arg4 andOverallCompletion:(id /* block */)arg5;
- (void)setDateOfBirthComponents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHeightInCm:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOriginalHeightInCm:(id)arg1;
- (void)setOriginalWeightInKg:(id)arg1;
- (void)setSex:(id)arg1;
- (void)setWeightInKg:(id)arg1;
- (id)sex;
- (id)weightInKg;

@end


@interface HKMedicalIDEmergencyContactFlow : NSObject <HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate> {
    HKEmergencyContactPicker * _contactPicker;
    HKCoreTelephonyUtilities * _coreTelephonyUtilities;
    <HKMedicalIDEmergencyContactFlowDelegate> * _delegate;
    bool  _isSecondaryProfile;
    _HKMedicalIDData * _medicalIDData;
    UIViewController * _owningViewController;
    _HKEmergencyContact * _selectedContact;
    bool  _shouldShowSuggestedContacts;
    NSArray * _suggestedContacts;
}

@property (nonatomic, retain) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (nonatomic) <HKMedicalIDEmergencyContactFlowDelegate> *delegate;
@property (nonatomic) bool isSecondaryProfile;
@property (nonatomic, retain) UIViewController *owningViewController;
@property (nonatomic) bool shouldShowSuggestedContacts;

- (void).cxx_destruct;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (id)coreTelephonyUtilities;
- (id)delegate;
- (void)emergencyContactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)emergencyContactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (void)fetchFamilyContactsForSuggestion;
- (id)initWithPresentingViewController:(id)arg1 forMedicalIDData:(id)arg2;
- (bool)isSecondaryProfile;
- (id)owningViewController;
- (void)presentEmergencyContactFlow;
- (void)setCoreTelephonyUtilities:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsSecondaryProfile:(bool)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setShouldShowSuggestedContacts:(bool)arg1;
- (void)setSuggestedContacts:(id)arg1;
- (bool)shouldShowSuggestedContacts;

@end

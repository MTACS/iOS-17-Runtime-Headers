
@interface HKEmergencyContactPicker : NSObject <CNContactPickerDelegate> {
    <HKEmergencyContactPickerDelegate> * _delegate;
    bool  _isSecondaryProfile;
    UIViewController * _owningViewController;
    NSArray * _suggestedContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKEmergencyContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSecondaryProfile;
@property (nonatomic, retain) UIViewController *owningViewController;
@property (nonatomic, retain) NSArray *suggestedContacts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_meContactIdentifier;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)delegate;
- (id)initWithOwningViewController:(id)arg1;
- (bool)isSecondaryProfile;
- (id)owningViewController;
- (void)presentEmergencyContactPickerForMedicalIDDataIfPossible:(id)arg1;
- (void)presentMaximumEmergencyContactAlert;
- (void)setDelegate:(id)arg1;
- (void)setIsSecondaryProfile:(bool)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setSuggestedContacts:(id)arg1;
- (id)suggestedContacts;

@end

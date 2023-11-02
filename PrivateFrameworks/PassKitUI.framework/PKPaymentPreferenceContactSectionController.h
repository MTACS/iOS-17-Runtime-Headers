
@interface PKPaymentPreferenceContactSectionController : PKPaymentPreferenceSectionController {
    <PKPaymentPreferenceContactSectionControllerDelegate> * _contactDelegate;
    PKContactFormatValidator * _contactFormatValidator;
}

@property (nonatomic) <PKPaymentPreferenceContactSectionControllerDelegate> *contactDelegate;
@property (nonatomic, readonly) NSArray *contactItems;
@property (nonatomic, readonly) PKPaymentPreferenceContact *contactPreference;

- (void).cxx_destruct;
- (bool)_saveUpdatedContact:(id)arg1 contactKey:(id)arg2 preference:(id)arg3 atIndex:(long long)arg4;
- (id)addPreferenceItems;
- (id)appendNewSubPreference;
- (id)contactDelegate;
- (id)contactItems;
- (id)contactPreference;
- (void)deleteItem:(id)arg1 forRow:(unsigned long long)arg2;
- (void)editItem:(id)arg1 forRow:(unsigned long long)arg2;
- (bool)editedTextFieldHasError:(id)arg1;
- (id)initWithContactPreference:(id)arg1 contactFormatValidator:(id)arg2 style:(long long)arg3 preferencesChangedHandler:(id /* block */)arg4;
- (id)newOptionItemForSubPreference:(id)arg1 hasErrorHandler:(id /* block */)arg2;
- (void)saveContact:(id)arg1 forItem:(id)arg2 withContactKey:(id)arg3 completion:(id /* block */)arg4;
- (void)setContactDelegate:(id)arg1;

@end

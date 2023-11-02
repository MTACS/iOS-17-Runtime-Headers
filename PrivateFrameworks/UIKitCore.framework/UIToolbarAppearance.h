
@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {
    UIBarButtonItemAppearance * _buttonAppearance;
    UIBarButtonItemAppearance * _doneButtonAppearance;
}

@property (nonatomic, copy) UIBarButtonItemAppearance *buttonAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIBarButtonItemAppearance *doneButtonAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;
- (void)_barButtonItemDataChanged:(id)arg1;
- (bool)_checkEqualTo:(id)arg1;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (void)_describeInto:(id)arg1;
- (id)_doneButtonAppearance;
- (id)_doneButtonAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (id)_plainButtonAppearance;
- (id)_plainButtonAppearanceData;
- (void)_setupDefaults;
- (id)buttonAppearance;
- (id)doneButtonAppearance;
- (void)encodeWithCoder:(id)arg1;
- (void)setButtonAppearance:(id)arg1;
- (void)setDoneButtonAppearance:(id)arg1;

@end

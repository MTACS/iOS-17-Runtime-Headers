
@interface VSCredentialEntryPicker : NSObject {
    NSArray * _pickerItems;
    long long  _selectedIndex;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *pickerItems;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)pickerItemAtCurrentIndex;
- (id)pickerItems;
- (long long)selectedIndex;
- (void)setPickerItems:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface CNPropertySocialProfileEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate, UINavigationControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNSocialProfile *profile;
@property (readonly) Class superclass;

- (void)labelButtonClicked:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)profile;

@end

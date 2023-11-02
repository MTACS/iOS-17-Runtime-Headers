
@interface EKLocationVirtualConferenceSearchFieldsView : UIView <UITextFieldDelegate> {
    <EKLocationVirtualConferenceSearchFieldsDelegate> * _delegate;
    bool  _disableConferenceTextField;
    UIView * _hairline;
    UITextField * _locationTextField;
    UITextField * _selectedTextField;
    UITextField * _virtualConferenceTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKLocationVirtualConferenceSearchFieldsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableConferenceTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextField *locationTextField;
@property (nonatomic, readonly) double preferredHeight;
@property (nonatomic, retain) UITextField *selectedTextField;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *virtualConferenceTextField;

- (void).cxx_destruct;
- (id)_newTextFieldWithLeftViewText:(id)arg1 imageName:(id)arg2;
- (id)conferenceLabelImageName;
- (id)conferenceLabelText;
- (id)delegate;
- (bool)disableConferenceTextField;
- (id)init;
- (id)locationLabelImageName;
- (id)locationLabelText;
- (id)locationTextField;
- (double)preferredHeight;
- (id)selectedTextField;
- (void)setDelegate:(id)arg1;
- (void)setDisableConferenceTextField:(bool)arg1;
- (void)setSelectedTextField:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLeftViewForTextField:(id)arg1 withText:(id)arg2 imageName:(id)arg3;
- (id)virtualConferenceTextField;

@end

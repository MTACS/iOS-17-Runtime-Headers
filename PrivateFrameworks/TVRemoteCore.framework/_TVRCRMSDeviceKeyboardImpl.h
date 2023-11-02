
@interface _TVRCRMSDeviceKeyboardImpl : NSObject <TVRXKeyboardImpl> {
    <_TVRCRMSDeviceKeyboardImplDelegate> * _delegate;
    bool  _editing;
    TVRXKeyboardController * _keyboardController;
    TVRMSKeyboardInfo * _keyboardInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRCRMSDeviceKeyboardImplDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) TVRXKeyboardController *keyboardController;
@property (nonatomic, retain) TVRMSKeyboardInfo *keyboardInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributesForKeyboardInfo:(id)arg1;
- (long long)_keyboardTypeForInfo:(id)arg1;
- (id)attributes;
- (id)delegate;
- (bool)editing;
- (bool)isEditing;
- (id)keyboardController;
- (id)keyboardInfo;
- (void)keyboardSessionBegan:(id)arg1;
- (void)keyboardSessionEnded:(id)arg1;
- (void)keyboardSessionUpdatedEditingInfo:(id)arg1;
- (void)sendReturnKey;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setKeyboardInfo:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

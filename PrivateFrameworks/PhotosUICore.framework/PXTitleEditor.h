
@interface PXTitleEditor : NSObject {
    NSString * _cancelButtonTitle;
    id /* block */  _completionHandler;
    UIAlertAction * _confirmAction;
    NSString * _confirmButtonTitle;
    bool  _includesSubtitle;
    NSString * _message;
    NSString * _subtitle;
    NSString * _subtitlePlaceholder;
    UITextField * _subtitleTextField;
    NSString * _title;
    NSString * _titlePlaceholder;
    UITextField * _titleTextField;
    id /* block */  _validation;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIAlertAction *confirmAction;
@property (nonatomic, copy) NSString *confirmButtonTitle;
@property (nonatomic) bool includesSubtitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitlePlaceholder;
@property (nonatomic, retain) UITextField *subtitleTextField;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titlePlaceholder;
@property (nonatomic, retain) UITextField *titleTextField;
@property (nonatomic, copy) id /* block */ validation;

- (void).cxx_destruct;
- (void)_handleSuccess:(bool)arg1;
- (void)_invalidateConfirmAction;
- (void)_textFieldDidChange:(id)arg1;
- (void)_updateConfirmAction;
- (void)_updateExposedProperties;
- (id)cancelButtonTitle;
- (id /* block */)completionHandler;
- (id)confirmAction;
- (id)confirmButtonTitle;
- (id)createAlertController;
- (bool)includesSubtitle;
- (id)init;
- (id)message;
- (void)presentFromViewController:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConfirmAction:(id)arg1;
- (void)setConfirmButtonTitle:(id)arg1;
- (void)setIncludesSubtitle:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitlePlaceholder:(id)arg1;
- (void)setSubtitleTextField:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePlaceholder:(id)arg1;
- (void)setTitleTextField:(id)arg1;
- (void)setValidation:(id /* block */)arg1;
- (id)subtitle;
- (id)subtitlePlaceholder;
- (id)subtitleTextField;
- (id)title;
- (id)titlePlaceholder;
- (id)titleTextField;
- (id /* block */)validation;

@end

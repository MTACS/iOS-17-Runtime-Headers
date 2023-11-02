
@interface VTUIDictationDataSharingReminderAlertViewModel : NSObject {
    NSString * _confirmationButtonTitle;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, copy) NSString *confirmationButtonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)confirmationButtonTitle;
- (id)message;
- (void)setConfirmationButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

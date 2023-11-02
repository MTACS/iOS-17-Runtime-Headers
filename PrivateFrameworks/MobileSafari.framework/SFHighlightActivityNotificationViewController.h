
@interface SFHighlightActivityNotificationViewController : UIViewController {
    CNContact * _contact;
    CNAvatarViewController * _contactViewController;
    NSString * _messageText;
    UILabel * _subtitleLabel;
    NSString * _titleText;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, copy) NSString *messageText;
@property (nonatomic, readonly, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithContact:(id)arg1;
- (id)initWithTitleText:(id)arg1;
- (id)messageText;
- (void)setMessageText:(id)arg1;
- (id)titleText;
- (void)viewDidLoad;

@end

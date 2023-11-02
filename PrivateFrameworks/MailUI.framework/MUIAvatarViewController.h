
@interface MUIAvatarViewController : NSObject {
    CNAvatarViewController * _avatarViewController;
    UIView * _view;
}

@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, readonly) UIView *view;

+ (id)avatarControllerWithContacts:(id)arg1;

- (void).cxx_destruct;
- (id)avatarViewController;
- (id)initWithContacts:(id)arg1;
- (void)setAvatarViewController:(id)arg1;
- (void)updateContacts:(id)arg1;
- (id)view;

@end


@interface SMUAvatarViewController : NSObject {
    CNAvatarViewController * _avatarViewController;
    UIView * view;
}

@property (nonatomic, readonly) UIView *view;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)init;
- (void)setContact:(id)arg1;
- (id)view;

@end

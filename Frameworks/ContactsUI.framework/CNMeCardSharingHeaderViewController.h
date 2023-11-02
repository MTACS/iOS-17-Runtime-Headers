
@interface CNMeCardSharingHeaderViewController : UIViewController {
    CNMeCardSharingAvatarViewController * _avatarViewController;
    CNMeCardSharingPickerLayoutAttributes * _layoutAttributes;
    unsigned long long  _mode;
    NSString * _name;
    UILabel * _nameLabel;
}

@property (nonatomic, retain) CNMeCardSharingAvatarViewController *avatarViewController;
@property (nonatomic, retain) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;

- (void).cxx_destruct;
- (id)avatarViewController;
- (double)desiredHeight;
- (id)initWithAvatarViewController:(id)arg1 name:(id)arg2 layoutAttributes:(id)arg3;
- (id)layoutAttributes;
- (unsigned long long)mode;
- (id)name;
- (id)nameLabel;
- (void)setAvatarViewController:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

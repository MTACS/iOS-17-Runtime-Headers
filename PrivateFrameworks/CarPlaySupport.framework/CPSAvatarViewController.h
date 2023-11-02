
@interface CPSAvatarViewController : UIViewController <CPSEntityUpdateSupporting> {
    UIImageView * _avatarImageView;
    <CPEntityImageProviding> * _entity;
    NSArray * _layoutConstraints;
}

@property (nonatomic, readonly) UIImageView *avatarImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CPEntityImageProviding> *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avatarImageView;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (id)layoutConstraints;
- (id)preferredFocusEnvironments;
- (void)resetLayoutConstraints;
- (void)setEntity:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)updateWithEntity:(id)arg1;
- (void)viewDidLoad;

@end

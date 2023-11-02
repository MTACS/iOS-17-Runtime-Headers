
@interface PXPeopleConfirmationLoadingView : UIView {
    PXPeopleScalableAvatarView * _avatarView;
    UIContentUnavailableView * _contentLoadingView;
    long long  _loadingState;
    UILabel * _noneFoundLabel;
    <PXPerson> * _person;
}

@property (nonatomic, readonly) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic, readonly) UIContentUnavailableView *contentLoadingView;
@property (nonatomic) long long loadingState;
@property (nonatomic, readonly) UILabel *noneFoundLabel;
@property (nonatomic, readonly) <PXPerson> *person;

- (void).cxx_destruct;
- (void)_updateViewVisibilityForLoadingStateInitial;
- (void)_updateViewVisibilityForLoadingStateLoading;
- (void)_updateViewVisibilityForLoadingStateNoneFound;
- (id)avatarView;
- (id)contentLoadingView;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 person:(id)arg2;
- (void)layoutSubviews;
- (long long)loadingState;
- (id)noneFoundLabel;
- (id)person;
- (void)setLoadingState:(long long)arg1;

@end


@interface ASCAdLockupPresenter : NSObject {
    ASCLockup * _lockup;
    <ASCAdLockupPresenterView> * _view;
}

@property (nonatomic, copy) ASCLockup *lockup;
@property (nonatomic, readonly) <ASCAdLockupPresenterView> *view;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)arg1 lockupPresenter:(id)arg2;
- (id)lockup;
- (void)lockupPresenterDidChange:(id)arg1;
- (void)setAdTransparencyButtonHidden:(bool)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setEditorsChoice:(bool)arg1;
- (void)setLockup:(id)arg1;
- (void)setProductDescription:(id)arg1;
- (void)setProductRating:(float)arg1;
- (void)setProductRatingBadge:(id)arg1;
- (bool)shouldDisplayDescriptionForLockup:(id)arg1;
- (id)view;

@end


@interface CKCatchUpButton : UIView <UIGestureRecognizerDelegate> {
    UIImageView * _arrow;
    UIView * _container;
    <CKCatchUpButtonDelegate> * _delegate;
}

@property (nonatomic, retain) UIImageView *arrow;
@property (nonatomic, retain) UIView *container;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKCatchUpButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)arrow;
- (void)bannerPressed:(id)arg1;
- (id)container;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (void)setArrow:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

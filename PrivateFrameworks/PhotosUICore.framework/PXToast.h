
@interface PXToast : NSObject {
    double  _bottomMargin;
    PXToastConfiguration * _configuration;
    bool  _isShown;
    NSLayoutConstraint * _offscreenConstraint;
    NSLayoutConstraint * _onscreenConstraint;
    UIView * _view;
}

@property (nonatomic) double bottomMargin;
@property (nonatomic) bool isShown;
@property (nonatomic, retain) NSLayoutConstraint *offscreenConstraint;
@property (nonatomic, retain) NSLayoutConstraint *onscreenConstraint;
@property (nonatomic, retain) UIView *view;

+ (id)show:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_dismissAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleSwipe:(id)arg1;
- (void)_present;
- (double)bottomMargin;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissAnimated:(bool)arg1 afterDelay:(double)arg2;
- (id)initWithConfiguration:(id)arg1;
- (bool)isShown;
- (id)offscreenConstraint;
- (id)onscreenConstraint;
- (void)setBottomMargin:(double)arg1;
- (void)setIsShown:(bool)arg1;
- (void)setOffscreenConstraint:(id)arg1;
- (void)setOnscreenConstraint:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end

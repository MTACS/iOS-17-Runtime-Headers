
@interface PKAccessoryDeviceView : UIView {
    PKAccessoryDevice * _accessory;
    double  _animationDelay;
    UIColor * _backgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cutoutFrame;
    <PKAccessoryDeviceViewDelegate> * _delegate;
    PKGlyphView * _glyph;
    UIView * _imageBackgroundView;
    UILabel * _label;
    UIView * _parentView;
    PKPass * _pass;
    long long  _state;
    UIColor * _strokeColor;
    NSObject<OS_dispatch_source> * _timeOutBlockTimer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cutoutFrame;
@property (nonatomic) <PKAccessoryDeviceViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_layoutFailureState;
- (void)_layoutProcessingState;
- (void)_layoutSuccessState;
- (void)_layoutSuccessWithUserInterventionState;
- (void)_layoutTryAgainState;
- (void)_setColors;
- (void)_showWalletWithMessage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_springBoardCutoutRect;
- (void)changeToState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cutoutFrame;
- (id)delegate;
- (void)dismissViewImmediatelyWithCompletion:(id /* block */)arg1;
- (void)dismissViewWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPass:(id)arg1 accessory:(id)arg2 cutoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parentView:(id)arg4;
- (id)initWithState:(long long)arg1 accessory:(id)arg2 cutoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parentView:(id)arg4;
- (void)layoutSubviews;
- (void)presentOnParentView;
- (void)setCutoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end

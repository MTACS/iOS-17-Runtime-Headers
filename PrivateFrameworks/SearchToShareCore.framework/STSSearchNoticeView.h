
@interface STSSearchNoticeView : UIView {
    NSMutableArray * _constraints;
    bool  _contentCentered;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIButton * _continueButton;
    id /* block */  _continueButtonAction;
    NSString * _text;
    UILabel * _textLabel;
}

@property (getter=isContentCentered, nonatomic) bool contentCentered;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) id /* block */ continueButtonAction;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (void)_continuePressed:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id /* block */)continueButtonAction;
- (id)init;
- (bool)isContentCentered;
- (void)layoutSubviews;
- (void)setContentCentered:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContinueButtonAction:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end

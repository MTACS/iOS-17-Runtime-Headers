
@interface CPSActionButton : CPSButton {
    NSDictionary * _buttonAttributes;
    UIImage * _buttonImage;
    UIImageView * _buttonImageView;
    UILabel * _buttonLabel;
    NSString * _buttonText;
    bool  _disabledButtonFocused;
    NSArray * _layoutConstraints;
    <CPSActionButtonLayoutDelegate> * _layoutDelegate;
    NSMutableDictionary * _tintColors;
}

@property (nonatomic, retain) NSDictionary *buttonAttributes;
@property (nonatomic, retain) UIImage *buttonImage;
@property (nonatomic, retain) UIImageView *buttonImageView;
@property (nonatomic, retain) UILabel *buttonLabel;
@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic) bool disabledButtonFocused;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic) <CPSActionButtonLayoutDelegate> *layoutDelegate;
@property (nonatomic, retain) NSMutableDictionary *tintColors;

- (void).cxx_destruct;
- (void)_updateLayout;
- (id)buttonAttributes;
- (id)buttonImage;
- (id)buttonImageView;
- (id)buttonLabel;
- (id)buttonText;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)disabledButtonFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutConstraints;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (void)resetLayoutConstraints;
- (void)setButtonAttributes:(id)arg1;
- (void)setButtonImage:(id)arg1;
- (void)setButtonImageView:(id)arg1;
- (void)setButtonLabel:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDisabledButtonFocused:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTintColors:(id)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)stateUpdated;
- (id)tintColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateViews;

@end

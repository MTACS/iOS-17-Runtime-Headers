
@interface UIKBTutorialSinglePageView : UIView {
    UILabel * _textBody;
    UILabel * _textTitle;
    bool  _useAlertStyle;
    UIView * _visualDisplayView;
}

@property (nonatomic, retain) UILabel *textBody;
@property (nonatomic, retain) UILabel *textTitle;
@property (nonatomic) bool useAlertStyle;
@property (nonatomic, retain) UIView *visualDisplayView;

- (void).cxx_destruct;
- (void)configPageView;
- (id)initWithImageView:(id)arg1;
- (void)layoutSubviews;
- (void)setTextBody:(id)arg1;
- (void)setTextTitle:(id)arg1;
- (void)setUseAlertStyle:(bool)arg1;
- (void)setVisualDisplayView:(id)arg1;
- (id)textBody;
- (id)textTitle;
- (bool)useAlertStyle;
- (id)visualDisplayView;

@end

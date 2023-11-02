
@interface SBIconWidgetIntroductionPopoverView : SBHPopoverView {
    <SBIconWidgetIntroductionDelegate> * _delegate;
    UIButton * _editButton;
    UIButton * _okButton;
    UILabel * _textLabel;
    UIView * _verticalDividerLine;
}

@property (nonatomic) <SBIconWidgetIntroductionDelegate> *delegate;
@property (nonatomic, retain) UIButton *editButton;
@property (nonatomic, retain) UIButton *okButton;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) UIView *verticalDividerLine;

+ (struct CGSize { double x1; double x2; })contentSize:(bool)arg1;

- (void).cxx_destruct;
- (void)_editButtonTapped:(id)arg1;
- (void)_okButtonTapped:(id)arg1;
- (void)_setUpViews:(bool)arg1;
- (void)_updateForUserInterfaceStyle;
- (id)delegate;
- (id)editButton;
- (id)initWithDelegate:(id)arg1 vertical:(bool)arg2;
- (id)okButton;
- (void)setDelegate:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setOkButton:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setVerticalDividerLine:(id)arg1;
- (id)textLabel;
- (id)verticalDividerLine;

@end

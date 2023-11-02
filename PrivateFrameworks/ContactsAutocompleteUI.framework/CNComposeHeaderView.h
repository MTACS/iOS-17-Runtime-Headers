
@interface CNComposeHeaderView : UIView {
    UILabel * _composeFieldInfoLabel;
    NSString * _composeFieldInfoText;
    <CNComposeHeaderViewDelegate> * _delegate;
    UIView * _highlightedBackgroundView;
    <CNComposeHeaderViewDelegate> * _internalDelegate;
    CNComposeHeaderLabelView * _labelView;
    NSString * _navTitle;
    UIView * _separator;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _separatorDirectionalEdgeInsets;
    bool  _showsHighlightWhenTouched;
}

@property (nonatomic, retain) UILabel *composeFieldInfoLabel;
@property (nonatomic, copy) NSString *composeFieldInfoText;
@property (nonatomic) <CNComposeHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIView *highlightedBackgroundView;
@property (nonatomic) <CNComposeHeaderViewDelegate> *internalDelegate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) CNComposeHeaderLabelView *labelView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mf_scribbleFrame;
@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } separatorDirectionalEdgeInsets;
@property (nonatomic) bool showsHighlightWhenTouched;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

+ (double)_labelTopPaddingSpecification;
+ (id)defaultFont;
+ (id)defaultSeparatorColor;
+ (double)preferredHeight;
+ (double)separatorHeight;
+ (id)supplimentalMessageFont;

- (void).cxx_destruct;
- (double)_additionalContentHeight;
- (id)_automationID;
- (id)_baseAttributes;
- (bool)_canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;
- (id)_highlightedBackgroundView;
- (void)_notifyDelegateOfSizeChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_recipientViewEdgeInsets;
- (bool)_shouldEmbedLabelInTextView;
- (id)composeFieldInfoLabel;
- (id)composeFieldInfoText;
- (void)createComposeFieldInfoLabelIfNeeded;
- (id)delegate;
- (void)handleTouchesEnded;
- (id)headerViewDelegates;
- (id)highlightedBackgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalDelegate;
- (id)label;
- (id)labelColor;
- (double)labelTopPadding;
- (id)labelView;
- (void)layoutComposeFieldInfoLabelWithContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 labelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (id)separator;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })separatorDirectionalEdgeInsets;
- (void)setComposeFieldInfoLabel:(id)arg1;
- (void)setComposeFieldInfoText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightedBackgroundView:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelView:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsHighlightWhenTouched:(bool)arg1;
- (bool)showsHighlightWhenTouched;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mf_scribbleFrame;

@end

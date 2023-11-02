
@interface HUExpandableTextView : UIView {
    bool  _alwaysShowMoreButtonUnlessExpanded;
    <HUExpandableTextViewDelegate> * _delegate;
    bool  _expanded;
    bool  _fitsWithinLineLimit;
    unsigned long long  _languageDirection;
    UIButton * _moreButton;
    NSArray * _moreButtonLayoutConstraints;
    unsigned long long  _numberOfLines;
    <HFStringGenerator> * _stringGenerator;
    NSDictionary * _textAttributes;
    UITextView * _textView;
}

@property (nonatomic) bool alwaysShowMoreButtonUnlessExpanded;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic) <HUExpandableTextViewDelegate> *delegate;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) bool fitsWithinLineLimit;
@property (nonatomic) unsigned long long languageDirection;
@property (nonatomic, retain) UIButton *moreButton;
@property (nonatomic, retain) NSArray *moreButtonLayoutConstraints;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic, copy) <HFStringGenerator> *stringGenerator;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_resetMoreButtonLayoutConstraints;
- (void)_updateLanguageDirection;
- (bool)alwaysShowMoreButtonUnlessExpanded;
- (id)attributedText;
- (id)delegate;
- (bool)fitsWithinLineLimit;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExpanded;
- (unsigned long long)languageDirection;
- (void)layoutSubviews;
- (id)moreButton;
- (id)moreButtonLayoutConstraints;
- (void)moreButtonTapped:(id)arg1;
- (unsigned long long)numberOfLines;
- (void)setAlwaysShowMoreButtonUnlessExpanded:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFitsWithinLineLimit:(bool)arg1;
- (void)setLanguageDirection:(unsigned long long)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setMoreButtonLayoutConstraints:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setStringGenerator:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)stringGenerator;
- (id)text;
- (id)textAttributes;
- (id)textView;
- (void)updateConstraints;

@end

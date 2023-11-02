
@interface _SMUTVFocusableTextView : _TVFocusableTextView <SMUTVFocusableTextView> {
    bool  __textTruncating;
    double  _maximumLineWidth;
}

@property (nonatomic) bool _textTruncating;
@property (getter=isAlwaysFocusable, nonatomic) bool alwaysFocusable;
@property (nonatomic) bool alwaysShowBackground;
@property (nonatomic, retain) NSAttributedString *descriptionText;
@property (nonatomic) long long descriptionTextAlignment;
@property (nonatomic, retain) UIColor *descriptionTextColor;
@property (nonatomic, retain) UIColor *descriptionTextHighlightColor;
@property (nonatomic) bool disableFocus;
@property (nonatomic) unsigned long long focusSizeIncrease;
@property (nonatomic, retain) UIColor *highlightBackgroundColor;
@property (nonatomic) double maximumLineWidth;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic) bool moreLabelOnNewLine;
@property (nonatomic, retain) NSString *moreLabelText;
@property (nonatomic, retain) UIColor *moreLabelTextColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, copy) id /* block */ playHandler;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (getter=isTextTruncating, nonatomic, readonly) bool textTruncating;
@property (nonatomic) bool trackHorizontal;

- (bool)_textTruncating;
- (double)maximumLineWidth;
- (void)setMaximumLineWidth:(double)arg1;
- (void)set_textTruncating:(bool)arg1;

@end

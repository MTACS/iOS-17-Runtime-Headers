
@interface DMCEnrollmentTableViewTextCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource> {
    bool  _bold;
    UIButton * _button;
    UITextView * _hiddenTextView;
    UILabel * _label;
    unsigned long long  _layoutStyle;
    id /* block */  _linkAction;
    NSString * _linkText;
    bool  _linkTextOnNextLine;
    double  _previousWidth;
    bool  _shouldCalculateLinkTextLineBreak;
    UILabel * _subLabel;
    NSString * _text;
    long long  _textAlignment;
}

@property (nonatomic) bool bold;
@property (nonatomic, retain) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *hiddenTextView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic, copy) id /* block */ linkAction;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic) bool linkTextOnNextLine;
@property (nonatomic) double previousWidth;
@property (nonatomic) bool shouldCalculateLinkTextLineBreak;
@property (nonatomic, retain) UILabel *subLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (double)_horizontalMargin;
- (id)_rectsOfLinkText;
- (id)_subTextFont;
- (id)_textFontIsBold:(bool)arg1;
- (void)_updateTextFont;
- (double)_verticalMargin;
- (bool)bold;
- (id)button;
- (id)cell;
- (double)cellHeight;
- (void)configureLinkText:(id)arg1 forceLineBreak:(bool)arg2 linkAction:(id /* block */)arg3;
- (double)estimatedCellHeight;
- (id)hiddenTextView;
- (id)initWithText:(id)arg1 bold:(bool)arg2;
- (id)initWithText:(id)arg1 bold:(bool)arg2 subText:(id)arg3 layoutStyle:(unsigned long long)arg4;
- (bool)isMultipleLines:(id)arg1;
- (id)label;
- (unsigned long long)layoutStyle;
- (void)layoutSubviews;
- (id /* block */)linkAction;
- (id)linkText;
- (bool)linkTextOnNextLine;
- (double)previousWidth;
- (void)setBold:(bool)arg1;
- (void)setButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHiddenTextView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (void)setLinkAction:(id /* block */)arg1;
- (void)setLinkText:(id)arg1;
- (void)setLinkTextOnNextLine:(bool)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setShouldCalculateLinkTextLineBreak:(bool)arg1;
- (void)setSubLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (bool)shouldCalculateLinkTextLineBreak;
- (id)subLabel;
- (id)text;
- (long long)textAlignment;

@end

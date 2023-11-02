
@interface _UIContentViewLabelConfiguration : NSObject <NSCopying, NSSecureCoding, _UIListContentTextPropertiesInternal> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _adjustsFontSizeToFitWidth;
    bool  _allowsDefaultTighteningForTruncation;
    NSAttributedString * _attributedText;
    struct { 
        unsigned int hasCustomizedFont : 1; 
        unsigned int hasCustomizedTextColor : 1; 
        unsigned int hasCustomizedTextAlignment : 1; 
        unsigned int hasCustomizedLineBreakMode : 1; 
        unsigned int hasCustomizedNumberOfLines : 1; 
        unsigned int hasCustomizedAdjustsFontSizeToFitWidth : 1; 
        unsigned int hasCustomizedMinimumScaleFactor : 1; 
        unsigned int hasCustomizedAllowsDefaultTighteningForTruncation : 1; 
        unsigned int hasCustomizedAdjustsFontForContentSizeCategory : 1; 
    }  _configurationFlags;
    UIFont * _font;
    UIColor * _highlightedTextColor;
    long long  _lineBreakMode;
    double  _minimumScaleFactor;
    long long  _numberOfLines;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic, readonly) long long _effectiveTextAlignment;
@property (nonatomic, readonly) bool _hasNonEmptyPlainTextOnly;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_effectiveTextAlignment;
- (bool)_hasNonEmptyPlainTextOnly;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowsDefaultTighteningForTruncation;
- (void)applyToLabel:(id)arg1;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)highlightedTextColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lineBreakMode;
- (double)minimumScaleFactor;
- (long long)numberOfLines;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;

@end

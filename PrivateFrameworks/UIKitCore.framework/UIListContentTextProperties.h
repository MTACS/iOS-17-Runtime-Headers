
@interface UIListContentTextProperties : NSObject <NSCopying, NSSecureCoding, _UIListContentTextPropertiesInternal> {
    bool  __enablesMarqueeWhenAncestorFocused;
    bool  _adjustsFontForContentSizeCategory;
    bool  _adjustsFontSizeToFitWidth;
    long long  _alignment;
    bool  _allowsDefaultTighteningForTruncation;
    NSAttributedString * _attributedText;
    UIColor * _color;
    id /* block */  _colorTransformer;
    long long  _colorTransformerIdentifier;
    UIFont * _font;
    long long  _lineBreakMode;
    double  _minimumScaleFactor;
    long long  _numberOfLines;
    long long  _renderingMode;
    bool  _showsExpansionTextWhenTruncated;
    NSString * _text;
    struct { 
        unsigned int hasCustomizedFont : 1; 
        unsigned int hasCustomizedColor : 1; 
        unsigned int hasCustomizedColorTransformer : 1; 
        unsigned int hasCustomizedAlignment : 1; 
        unsigned int hasCustomizedLineBreakMode : 1; 
        unsigned int hasCustomizedNumberOfLines : 1; 
        unsigned int hasCustomizedAdjustsFontSizeToFitWidth : 1; 
        unsigned int hasCustomizedMinimumScaleFactor : 1; 
        unsigned int hasCustomizedAllowsDefaultTighteningForTruncation : 1; 
        unsigned int hasCustomizedAdjustsFontForContentSizeCategory : 1; 
        unsigned int hasCustomizedShowsExpansionTextWhenTruncated : 1; 
        unsigned int hasCustomizedTransform : 1; 
        unsigned int hasCustomizedRenderingMode : 1; 
        unsigned int hasCustomizedMarqueeWhenAncestorFocused : 1; 
    }  _textFlags;
    long long  _transform;
}

@property (nonatomic, readonly) long long _effectiveTextAlignment;
@property (setter=_setEnablesMarqueeWhenAncestorFocused:, nonatomic) bool _enablesMarqueeWhenAncestorFocused;
@property (nonatomic, readonly) bool _hasNonEmptyPlainTextOnly;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) long long alignment;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, copy) id /* block */ colorTransformer;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) bool showsExpansionTextWhenTruncated;
@property (nonatomic) long long transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_effectiveTextAlignment;
- (bool)_enablesMarqueeWhenAncestorFocused;
- (bool)_hasNonEmptyPlainTextOnly;
- (void)_setEnablesMarqueeWhenAncestorFocused:(bool)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (long long)alignment;
- (bool)allowsDefaultTighteningForTruncation;
- (id)color;
- (id /* block */)colorTransformer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lineBreakMode;
- (double)minimumScaleFactor;
- (long long)numberOfLines;
- (id)resolvedColor;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setColorTransformer:(id /* block */)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setShowsExpansionTextWhenTruncated:(bool)arg1;
- (void)setTransform:(long long)arg1;
- (bool)showsExpansionTextWhenTruncated;
- (long long)transform;

@end

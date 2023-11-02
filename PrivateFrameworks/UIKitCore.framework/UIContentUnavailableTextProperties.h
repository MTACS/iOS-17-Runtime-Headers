
@interface UIContentUnavailableTextProperties : NSObject <NSCopying, NSSecureCoding> {
    bool  _adjustsFontSizeToFitWidth;
    long long  _alignment;
    bool  _allowsDefaultTighteningForTruncation;
    NSAttributedString * _attributedText;
    UIColor * _color;
    UIFont * _font;
    long long  _lineBreakMode;
    double  _minimumScaleFactor;
    long long  _numberOfLines;
    NSString * _text;
    struct { 
        unsigned int hasCustomizedText : 1; 
        unsigned int hasCustomizedFont : 1; 
        unsigned int hasCustomizedColor : 1; 
        unsigned int hasCustomizedLineBreakMode : 1; 
        unsigned int hasCustomizedAttributedText : 1; 
        unsigned int hasCustomizedNumberOfLines : 1; 
        unsigned int hasCustomizedAdjustsFontSizeToFitWidth : 1; 
        unsigned int hasCustomizedMinimumScaleFactor : 1; 
        unsigned int hasCustomizedAllowsDefaultTighteningForTruncation : 1; 
    }  _textFlags;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long numberOfLines;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowsDefaultTighteningForTruncation;
- (id)color;
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
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)asTTRI;

@end


@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding> {
    MPArtworkGradientInfo * _gradient;
    bool  _hasTitle;
    UIColor * _textColor;
}

@property (nonatomic, readonly) MPArtworkGradientInfo *gradient;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) UIColor *textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gradient;
- (bool)hasTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextColor:(id)arg1 gradientInfo:(id)arg2 hasTitle:(bool)arg3;
- (id)initWithTextColor:(id)arg1 hasTitle:(bool)arg2;
- (id)textColor;

@end

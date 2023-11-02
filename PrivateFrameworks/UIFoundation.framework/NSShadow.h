
@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {
    double  _shadowBlurRadius;
    NSColor * _shadowColor;
    unsigned long long  _shadowFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
}

@property (nonatomic) double shadowBlurRadius;
@property (nonatomic, retain) id shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)defaultShadowColor;
+ (void)initialize;
+ (id)shadow;
+ (bool)supportsSecureCoding;

- (void)applyToGraphicsContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setShadowBlurRadius:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowBlurRadius;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)ck_applyToGraphicsContext:(struct CGContext { }*)arg1;

// Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit

- (void)applyToGraphicsContext_emk:(struct CGContext { }*)arg1;

@end


@interface _UIBadgeVisualStyle : NSObject

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) UIColor *defaultBadgeColor;
@property (nonatomic, readonly) double edgePadding;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double maxWidth;
@property (nonatomic, readonly) double minWidth;

- (double)cornerRadius;
- (id)defaultBadgeColor;
- (double)edgePadding;
- (id)font;
- (double)fontSize;
- (double)maxWidth;
- (double)minWidth;

@end

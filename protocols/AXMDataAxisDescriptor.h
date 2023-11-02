
@protocol AXMDataAxisDescriptor <NSCopying>

@required

- (NSAttributedString *)attributedTitle;
- (bool)isCategoricalAxis;
- (double)lowerBound;
- (void)setAttributedTitle:(NSAttributedString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;
- (double)upperBound;

@end

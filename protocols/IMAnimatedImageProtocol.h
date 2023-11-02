
@protocol IMAnimatedImageProtocol

@required

+ (id)animatedImageWithContentsOfASTCURL:(NSURL *)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(NSURL *)arg1;

- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end

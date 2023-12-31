
@protocol SXImageResource <SXResource>

@required

- (struct CGSize { double x1; double x2; })dimensions;
- (double)heightForImageWidth:(double)arg1;
- (NSString *)imageIdentifier;
- (struct CGSize { double x1; double x2; })sizeThatFills:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)wideColorSpace;
- (double)widthForImageHeight:(double)arg1;

@end

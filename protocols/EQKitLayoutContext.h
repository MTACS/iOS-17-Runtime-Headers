
@protocol EQKitLayoutContext <NSObject>

@required

- (struct __CFString { }*)baseFontName;
- (double)baseFontSize;
- (double)containerWidth;

@optional

- (struct CGColor { }*)baseFontColor;

@end

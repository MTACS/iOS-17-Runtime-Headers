
@protocol _BlastDoorLPMediaMetadata <NSObject>

@required

- (NSURL *)URL;
- (NSString *)accessibilityText;
- (NSString *)type;

@optional

- (struct CGSize { double x1; double x2; })size;

@end

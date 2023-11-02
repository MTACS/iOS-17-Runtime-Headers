
@protocol SFImage <NSObject>

@required

- (NSString *)accessibilityLabel;
- (SFImage *)badgingImage;
- (NSString *)contentType;
- (double)cornerRadius;
- (int)cornerRoundingStyle;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)identifier;
- (NSData *)imageData;
- (bool)isTemplate;
- (NSData *)jsonData;
- (NSString *)keyColor;
- (double)scale;
- (void)setAccessibilityLabel:(NSString *)arg1;
- (void)setBadgingImage:(SFImage *)arg1;
- (void)setContentType:(NSString *)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRoundingStyle:(int)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setImageData:(NSData *)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(NSString *)arg1;
- (void)setScale:(double)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSource:(int)arg1;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;
- (int)source;

@end

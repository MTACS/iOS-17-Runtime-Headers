
@protocol RFDefaultBrowserAppIconImage <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (int)image_style;
- (NSData *)jsonData;
- (void)setImage_style:(int)arg1;

@end

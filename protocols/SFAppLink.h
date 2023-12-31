
@protocol SFAppLink <NSObject>

@required

- (SFPunchout *)appPunchout;
- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (int)imageAlign;
- (NSData *)jsonData;
- (void)setAppPunchout:(SFPunchout *)arg1;
- (void)setImage:(SFImage *)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end

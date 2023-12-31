
@protocol SFButton <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (SFImage *)image;
- (bool)isSelected;
- (NSData *)jsonData;
- (SFImage *)selectedImage;
- (void)setImage:(SFImage *)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelectedImage:(SFImage *)arg1;

@end


@protocol GEOPictureItem

@required

- (<GEOMapItemPhoto> *)photo;
- (int)pictureItemPhotoType;
- (NSString *)primaryText;
- (NSString *)secondaryText;

@end

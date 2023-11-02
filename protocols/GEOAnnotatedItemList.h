
@protocol GEOAnnotatedItemList

@required

- (int)annotatedItemStyle;
- (GEOMapItemAttribution *)attribution;
- (<GEOPictureItemContainer> *)pictureItemContainer;
- (<GEOTextItemContainer> *)textItemContainer;
- (NSString *)title;

@end

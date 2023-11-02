
@interface SXGalleryItem : SXJSONObject

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) SXFormattedText *captionComponent;
@property (nonatomic, readonly) NSString *imageIdentifier;

@end


@interface IKGalleryTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *documentBanner;
@property (nonatomic, readonly, retain) IKGridElement *grid;

- (id)background;
- (id)documentBanner;
- (id)grid;

@end

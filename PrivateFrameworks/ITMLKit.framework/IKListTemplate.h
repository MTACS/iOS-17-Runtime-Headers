
@interface IKListTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *documentBanner;
@property (nonatomic, readonly, retain) IKListElement *list;

- (id)background;
- (id)documentBanner;
- (id)list;

@end

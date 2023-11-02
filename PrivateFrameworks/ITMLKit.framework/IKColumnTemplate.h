
@interface IKColumnTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKColumnCollectionElement *columnCollection;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *documentBanner;

- (id)columnCollection;
- (id)documentBanner;

@end

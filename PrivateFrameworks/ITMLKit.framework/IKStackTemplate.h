
@interface IKStackTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly, retain) IKCollectionListElement *collectionList;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *documentBanner;

- (id)background;
- (id)collectionList;
- (id)documentBanner;

@end

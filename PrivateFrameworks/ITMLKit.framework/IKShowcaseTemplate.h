
@interface IKShowcaseTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly, retain) IKCarouselElement *carousel;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *documentBanner;
@property (nonatomic, readonly, retain) NSArray *modes;
@property (nonatomic, readonly) unsigned long long transition;

- (id)background;
- (id)carousel;
- (id)documentBanner;
- (id)modes;
- (unsigned long long)transition;

@end

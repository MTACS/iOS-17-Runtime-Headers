
@interface IKMainTemplate : IKViewElement

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly, retain) IKDocumentBannerElement *banner;
@property (nonatomic, readonly, retain) IKButtonElement *button;
@property (nonatomic, readonly, retain) IKMenuBarElement *menuBar;

- (id)background;
- (id)banner;
- (id)button;
- (id)menuBar;

@end


@interface IKListItemLockupElement : IKViewElement

@property (nonatomic, readonly, retain) IKActivityIndicatorElement *activityIndicator;
@property (nonatomic, readonly, retain) IKCheckMarkElement *checkMark;
@property (nonatomic, readonly, retain) NSArray *decorationImages;
@property (nonatomic, readonly, retain) IKTextElement *decorationLabel;
@property (nonatomic, readonly, retain) NSArray *images;
@property (nonatomic, readonly) NSString *itemHeight;
@property (nonatomic, readonly, retain) IKOrdinalElement *ordinal;
@property (nonatomic, readonly, retain) IKProgressIndicatorElement *progressIndicator;
@property (nonatomic, readonly, retain) IKViewElement *relatedContent;
@property (nonatomic, readonly, retain) IKTextElement *subtitle;
@property (nonatomic, readonly, retain) IKTextElement *title;

- (id)activityIndicator;
- (id)checkMark;
- (id)decorationImages;
- (id)decorationLabel;
- (id)images;
- (id)itemHeight;
- (id)ordinal;
- (id)progressIndicator;
- (id)relatedContent;
- (id)subtitle;
- (id)title;

@end

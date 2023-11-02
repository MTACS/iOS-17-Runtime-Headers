
@interface SXLinkAddition : SXAddition

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) SXJSONDictionary *analytics;

- (id)action;

@end

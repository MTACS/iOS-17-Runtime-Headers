
@protocol CPSBaseTemplateViewController <NSObject>

@required

- (CPTemplate *)associatedTemplate;
- (void)invalidate;
- (void)setAssociatedTemplate:(CPTemplate *)arg1;
- (void)setTemplateDelegate:(id <CPTemplateDelegate>)arg1;
- (<CPTemplateDelegate> *)templateDelegate;
- (NAFuture *)templateProviderFuture;

@end

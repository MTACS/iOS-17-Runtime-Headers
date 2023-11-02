
@interface SKUIReviewViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIDialogTemplateViewElement *dialogTemplate;
@property (nonatomic, readonly) SKUIResponseViewElement *response;

- (id)dialogTemplate;
- (id)response;

@end


@interface SUUIReviewViewElement : SUUIViewElement

@property (nonatomic, readonly) SUUIDialogTemplateViewElement *dialogTemplate;
@property (nonatomic, readonly) SUUIResponseViewElement *response;

- (id)dialogTemplate;
- (id)response;

@end

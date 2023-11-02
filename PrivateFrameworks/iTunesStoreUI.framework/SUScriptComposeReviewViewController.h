
@interface SUScriptComposeReviewViewController : SUScriptViewController

@property (readonly) SUScriptReview *review;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)init;
- (id)initWithScriptReview:(id)arg1 clientInterface:(id)arg2;
- (id)newNativeViewController;
- (id)review;
- (id)scriptAttributeKeys;
- (void)setReview:(id)arg1;

@end

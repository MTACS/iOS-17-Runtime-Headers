
@interface SAFmfVisibilityView : SAUISnippet

@property (nonatomic, copy) NSURL *searchContext;
@property (nonatomic) bool visible;

+ (id)visibilityView;
+ (id)visibilityViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;

@end

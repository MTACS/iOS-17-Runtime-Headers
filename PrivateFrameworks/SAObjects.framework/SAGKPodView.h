
@interface SAGKPodView : SAAceView

@property (nonatomic, copy) NSString *title;

+ (id)podView;
+ (id)podViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface SAARParaphrasedAlternativeResultsPod : SAAceView

@property (nonatomic, copy) NSArray *alternativeResultViews;
@property (nonatomic, copy) NSString *title;

+ (id)paraphrasedAlternativeResultsPod;
+ (id)paraphrasedAlternativeResultsPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)alternativeResultViews;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlternativeResultViews:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic, copy) NSString *alignment;
@property (nonatomic, copy) NSString *imageStyle;
@property (nonatomic, copy) NSString *imageURI;
@property (nonatomic, copy) NSArray *labelComponents;

+ (id)profileSnippetTemplate;
+ (id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)alignment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageStyle;
- (id)imageURI;
- (id)labelComponents;
- (void)setAlignment:(id)arg1;
- (void)setImageStyle:(id)arg1;
- (void)setImageURI:(id)arg1;
- (void)setLabelComponents:(id)arg1;

@end

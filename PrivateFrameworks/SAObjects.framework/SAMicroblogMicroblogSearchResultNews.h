
@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic, copy) NSURL *articleURL;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *title;

+ (id)microblogSearchResultNews;
+ (id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)articleURL;
- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setArticleURL:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

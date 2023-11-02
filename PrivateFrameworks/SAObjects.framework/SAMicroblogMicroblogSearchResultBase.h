
@interface SAMicroblogMicroblogSearchResultBase : SADomainObject

@property (nonatomic, retain) SAMicroblogTwitterPostAuthor *author;

+ (id)microblogSearchResultBase;
+ (id)microblogSearchResultBaseWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAuthor:(id)arg1;

@end

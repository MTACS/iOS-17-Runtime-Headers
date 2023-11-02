
@protocol _NSAttributedStringFromMarkdownCreator <NSObject>

@required

- (void)appendString:(NSString *)arg1;
- (void)appendString:(NSString *)arg1 with:(NSDictionary *)arg2;
- (unsigned short)lastCharacter;
- (NSDictionary *)parseExtendedAttributesFromData:(NSData *)arg1 error:(id*)arg2;

@optional

- (void)finalizeWithLanguageIdentifier:(NSString *)arg1;

@end

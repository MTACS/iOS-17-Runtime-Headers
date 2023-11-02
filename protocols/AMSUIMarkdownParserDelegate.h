
@protocol AMSUIMarkdownParserDelegate <NSObject>

@required

- (void)parser:(AMSUIMarkdownParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(AMSUIMarkdownParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(AMSUIMarkdownParser *)arg1 didFindArtworkWithIdentifier:(NSString *)arg2;
- (void)parser:(AMSUIMarkdownParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(AMSUIMarkdownParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(AMSUIMarkdownParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(AMSUIMarkdownParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(AMSUIMarkdownParser *)arg1;
- (void)parserDidEndListElement:(AMSUIMarkdownParser *)arg1;
- (void)parserDidFindNewline:(AMSUIMarkdownParser *)arg1;
- (void)parserDidStartDocument:(AMSUIMarkdownParser *)arg1;
- (void)parserDidStartListElement:(AMSUIMarkdownParser *)arg1;

@end

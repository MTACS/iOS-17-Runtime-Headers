
@protocol AMSUIDMarkdownParser <NSObject>

@required

- (void)parser:(AMSUIDMarkdownParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didFindArtworkWithIdentifier:(NSString *)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(AMSUIDMarkdownParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(AMSUIDMarkdownParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidEndListElement:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidFindNewline:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidStartDocument:(AMSUIDMarkdownParser *)arg1;
- (void)parserDidStartListElement:(AMSUIDMarkdownParser *)arg1;

@end

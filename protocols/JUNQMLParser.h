
@protocol JUNQMLParser <NSObject>

@required

- (void)parser:(JUNQMLParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(JUNQMLParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(JUNQMLParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(JUNQMLParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(JUNQMLParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(JUNQMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(JUNQMLParser *)arg1;
- (void)parserDidEndListElement:(JUNQMLParser *)arg1;
- (void)parserDidFindNewline:(JUNQMLParser *)arg1;
- (void)parserDidStartDocument:(JUNQMLParser *)arg1;
- (void)parserDidStartListElement:(JUNQMLParser *)arg1;

@end

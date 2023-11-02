
@protocol ASKNQMLParser <NSObject>

@required

- (void)parser:(ASKNQMLParser *)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(ASKNQMLParser *)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(ASKNQMLParser *)arg1 didFindCharacters:(NSString *)arg2;
- (void)parser:(ASKNQMLParser *)arg1 didStartElement:(unsigned long long)arg2 attributes:(NSDictionary *)arg3;
- (void)parser:(ASKNQMLParser *)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(ASKNQMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parserDidEndDocument:(ASKNQMLParser *)arg1;
- (void)parserDidEndListElement:(ASKNQMLParser *)arg1;
- (void)parserDidFindNewline:(ASKNQMLParser *)arg1;
- (void)parserDidStartDocument:(ASKNQMLParser *)arg1;
- (void)parserDidStartListElement:(ASKNQMLParser *)arg1;

@end


@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject <VUIHTMLMarkupParser> {
    void accumulator;
    void didParseEverything;
    void fontTraitsStack;
    void logger;
    void parser;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidFindNewline:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;

@end

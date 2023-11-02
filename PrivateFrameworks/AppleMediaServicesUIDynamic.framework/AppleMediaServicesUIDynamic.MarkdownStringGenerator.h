
@interface AppleMediaServicesUIDynamic.MarkdownStringGenerator : NSObject <AMSUIDMarkdownParser> {
    void accumulator;
    void attributeStack;
    void configuration;
    void didParseEverything;
    void orderedListTracker;
    void parser;
    void symbolTracker;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
- (void)parser:(id)arg1 didFindArtworkWithIdentifier:(id)arg2;
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidEndListElement:(id)arg1;
- (void)parserDidFindNewline:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidStartListElement:(id)arg1;

@end

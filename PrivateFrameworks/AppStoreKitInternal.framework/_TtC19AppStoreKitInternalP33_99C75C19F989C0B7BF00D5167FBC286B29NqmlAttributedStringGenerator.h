
@interface _TtC19AppStoreKitInternalP33_99C75C19F989C0B7BF00D5167FBC286B29NqmlAttributedStringGenerator : NSObject <ASKNQMLParser> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accumulator;
    void configuration;
    void didParseEverything;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastElementIndex;
    void openInlinePresentationIntents;
    void parser;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
- (void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
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


@interface SiriTTSService.HTMLSpeakableStringExtractor : NSObject <SiriTTSHTMLSAXParserDelegate> {
    void _speakableString;
    void elements;
    void htmlString;
    void isInSpeakableRange;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end


@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate> {
    <ENHTMLtoENMLConverterDelegate> * _delegate;
    NSMutableString * _enml;
    ENMLWriter * _enmlWriter;
    ENXMLSaxParser * _htmlParser;
    bool  _inHTMLBody;
    int  _skipCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ENHTMLtoENMLConverterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)enmlFromContentsOfHTMLFile:(id)arg1;
- (id)enmlFromHTMLContent:(id)arg1;
- (id)enmlWriter;
- (void)finish;
- (id)htmlParser;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)writeData:(id)arg1;
- (void)xmlWriter:(id)arg1 didGenerateData:(id)arg2;
- (void)xmlWriterDidEndWritingDocument:(id)arg1;

@end

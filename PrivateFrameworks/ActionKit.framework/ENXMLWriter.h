
@interface ENXMLWriter : NSObject {
    NSMutableString * _contents;
    NSString * _currentElementName;
    <ENXMLWriterDelegate> * _delegate;
    ENXMLDTD * _dtd;
    unsigned long long  _openElementCount;
    struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; } * _xmlOutputBuffer;
    struct _xmlTextWriter { } * _xmlWriter;
}

@property (nonatomic, readonly) NSString *contents;
@property (nonatomic, retain) NSString *currentElementName;
@property (nonatomic) <ENXMLWriterDelegate> *delegate;
@property (nonatomic, retain) ENXMLDTD *dtd;
@property (nonatomic) unsigned long long openElementCount;

- (void).cxx_destruct;
- (id)contents;
- (id)currentElementName;
- (void)dealloc;
- (id)delegate;
- (id)dtd;
- (void)endCDATA;
- (void)endDocument;
- (void)endElement;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)openElementCount;
- (void)setCurrentElementName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDtd:(id)arg1;
- (void)setOpenElementCount:(unsigned long long)arg1;
- (void)startCDATA;
- (void)startDocument;
- (bool)startElement:(id)arg1;
- (bool)startElement:(id)arg1 attributes:(id)arg2;
- (bool)startElement:(id)arg1 withAttributes:(id)arg2;
- (bool)writeAttributeName:(id)arg1 value:(id)arg2;
- (void)writeCDATA:(id)arg1;
- (bool)writeElement:(id)arg1 attributes:(id)arg2 content:(id)arg3;
- (bool)writeElement:(id)arg1 withAttributes:(id)arg2 content:(id)arg3;
- (void)writeRawString:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeString:(id)arg1 raw:(bool)arg2;

@end


@interface KSXMLWriter : KSForwardingWriter {
    KSXMLAttributes * _attributes;
    KSXMLElementContentsProxy * _contentsProxy;
    bool  _elementIsEmpty;
    unsigned long long  _encoding;
    long long  _indentation;
    unsigned long long  _inlineWritingLevel;
    NSMutableArray * _openElements;
}

@property (nonatomic) unsigned long long encoding;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, readonly) NSArray *openElements;

+ (void)initialize;
+ (id)stringFromAttributeValue:(id)arg1;
+ (id)stringFromCharacters:(id)arg1;

- (void).cxx_destruct;
- (bool)canWriteElementInline:(id)arg1;
- (void)close;
- (void)closeComment;
- (void)closeEmptyElementTag;
- (void)closeStartTag;
- (id)currentAttributes;
- (void)decreaseIndentationLevel;
- (void)didStartElement;
- (bool)elementCanBeEmpty:(id)arg1;
- (unsigned long long)encoding;
- (void)endCDATA;
- (void)endElement;
- (void)flush;
- (bool)hasCurrentAttributes;
- (bool)hasOpenElement:(id)arg1;
- (void)increaseIndentationLevel;
- (long long)indentationLevel;
- (id)initWithOutputWriter:(id)arg1;
- (id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2;
- (bool)isWritingInline;
- (void)openComment;
- (id)openElements;
- (unsigned long long)openElementsCount;
- (void)popElement;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (void)pushElement:(id)arg1;
- (void)setEncoding:(unsigned long long)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)startCDATA;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (void)startElement:(id)arg1;
- (void)startElement:(id)arg1 attributes:(id)arg2;
- (void)startElement:(id)arg1 writeInline:(bool)arg2;
- (void)startNewline;
- (void)startWritingInline;
- (void)stopWritingInline;
- (id)topElement;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (bool)validateElement:(id)arg1;
- (void)willStartElement:(id)arg1;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)writeAttributeValue:(id)arg1;
- (void)writeCharacters:(id)arg1;
- (void)writeComment:(id)arg1;
- (id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2;
- (void)writeElement:(id)arg1 text:(id)arg2;
- (void)writeEndTag:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(bool)arg2;

@end

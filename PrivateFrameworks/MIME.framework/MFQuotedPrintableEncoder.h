
@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {
    bool  _forHeader;
    bool  _forTextPart;
    unsigned char  _lastHorizontalWhitespace;
    bool  _lastWasNewLine;
    unsigned long long  _line;
    unsigned long long  _matchedFrom;
}

@property (nonatomic) bool forHeader;
@property (nonatomic) bool forTextPart;

+ (unsigned long long)requiredSizeToEncodeHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;

- (long long)appendData:(id)arg1;
- (void)done;
- (bool)forHeader;
- (bool)forTextPart;
- (void)setForHeader:(bool)arg1;
- (void)setForTextPart:(bool)arg1;

@end

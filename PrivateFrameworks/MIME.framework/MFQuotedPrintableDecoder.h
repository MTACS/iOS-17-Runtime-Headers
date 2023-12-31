
@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
    bool  _badlyEncoded;
    bool  _forTextPart;
    unsigned char  _lastEncoded;
    unsigned long long  _required;
}

@property (nonatomic) bool forTextPart;

- (long long)appendData:(id)arg1;
- (void)done;
- (bool)forTextPart;
- (void)setForTextPart:(bool)arg1;

@end

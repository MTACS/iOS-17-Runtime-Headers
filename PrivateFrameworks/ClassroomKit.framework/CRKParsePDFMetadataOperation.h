
@interface CRKParsePDFMetadataOperation : CATOperation {
    CRKBook * _book;
    NSString * _filePath;
    bool  _parseImage;
}

@property (nonatomic, readonly) CRKBook *book;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) bool parseImage;

- (void).cxx_destruct;
- (id)book;
- (id)fileName;
- (id)filePath;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(bool)arg3;
- (void)main;
- (bool)parseImage;
- (id)titleFromDictionaryRef:(struct CGPDFDictionary { }*)arg1;
- (void)updateAuthor:(id)arg1;
- (void)updateTitleWithDictionaryRef:(struct CGPDFDictionary { }*)arg1;

@end

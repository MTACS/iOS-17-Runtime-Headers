
@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {
    NSDictionary * _documentInfo;
    NSURL * _outputURL;
    NSMutableData * _pdfData;
}

@property (nonatomic, copy) NSDictionary *documentInfo;
@property (retain) NSURL *outputURL;
@property (retain) NSMutableData *pdfData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentInfo;
- (id)outputURL;
- (id)pdfData;
- (void)setDocumentInfo:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPdfData:(id)arg1;

@end

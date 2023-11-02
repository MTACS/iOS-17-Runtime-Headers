
@interface PKAccountWebServiceDocumentActionResponse : PKAccountWebServiceResponse {
    NSString * _documentDataFilename;
    NSString * _documentDataHash;
    NSData * _documentPDFData;
}

@property (nonatomic, readonly, copy) NSString *documentDataFilename;
@property (nonatomic, readonly, copy) NSString *documentDataHash;
@property (nonatomic, readonly, copy) NSData *documentPDFData;

- (void).cxx_destruct;
- (id)documentDataFilename;
- (id)documentDataHash;
- (id)documentPDFData;
- (id)initWithData:(id)arg1;

@end

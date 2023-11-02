
@protocol TSKEncryptedDocumentExporter <TSKExporter>

@required

- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional

- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@end

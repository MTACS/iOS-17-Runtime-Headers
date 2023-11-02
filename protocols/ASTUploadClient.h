
@protocol ASTUploadClient

@required

- (void)cancelAll;
- (void)cancelUploadWithId:(unsigned long long)arg1;
- (id)initWithASTSession:(ASTSession *)arg1 withDelegate:(id <ASTUploadClientDelegate>)arg2;
- (unsigned long long)queueUploadWithSourceData:(NSData *)arg1 andExtra:(NSDictionary *)arg2;
- (unsigned long long)queueUploadWithSourceUrl:(NSURL *)arg1 andExtra:(NSDictionary *)arg2;
- (NSArray *)uploadStatus;

@end

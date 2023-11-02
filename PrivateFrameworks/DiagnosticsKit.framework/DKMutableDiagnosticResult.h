
@interface DKMutableDiagnosticResult : DKDiagnosticResult {
    NSDictionary * _data;
    NSArray * _fileSandboxTokens;
    NSArray * _files;
    NSNumber * _statusCode;
    NSArray * _uploadStatus;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSArray *fileSandboxTokens;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic, retain) NSArray *uploadStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)fileSandboxTokens;
- (id)files;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setData:(id)arg1;
- (void)setFileSandboxTokens:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setUploadStatus:(id)arg1;
- (id)statusCode;
- (id)uploadStatus;

@end

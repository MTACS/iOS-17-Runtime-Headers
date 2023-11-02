
@interface ASTUploadFilesResult : NSObject {
    NSArray * _certs;
    NSArray * _files;
    NSString * _source;
}

@property (nonatomic, retain) NSArray *certs;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSString *source;

+ (id)resultFromSource:(id)arg1 andUploadDictionaries:(id)arg2;

- (void).cxx_destruct;
- (id)certs;
- (id)files;
- (id)generatePayload;
- (id)initWithSource:(id)arg1 andCerts:(id)arg2 andFiles:(id)arg3;
- (bool)isEmpty;
- (void)setCerts:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end

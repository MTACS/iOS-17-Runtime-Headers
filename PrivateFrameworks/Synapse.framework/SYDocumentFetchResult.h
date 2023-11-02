
@interface SYDocumentFetchResult : NSObject <NSCopying> {
    NSString * _documentId;
    NSURL * _fileURL;
}

@property (nonatomic, readonly) NSString *documentId;
@property (nonatomic, readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentId;
- (id)fileURL;
- (id)initWithDocumentId:(id)arg1 fileURL:(id)arg2;

@end

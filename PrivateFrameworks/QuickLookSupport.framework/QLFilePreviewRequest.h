
@interface QLFilePreviewRequest : NSObject {
    UTType * _contentType;
    NSURL * _fileURL;
}

@property (retain) UTType *contentType;
@property (readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (id)contentType;
- (id)fileURL;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 contentType:(id)arg2;
- (void)setContentType:(id)arg1;

@end

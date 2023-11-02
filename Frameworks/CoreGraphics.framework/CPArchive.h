
@interface CPArchive : NSObject <CPDisposable> {
    NSMutableString * htmlString;
    NSMutableString * htmlStringNoImages;
    struct __CFArray { } * imageNodes;
    NSMutableString * plainText;
    struct __CFArray { } * selections;
    NSData * webArchiveData;
}

- (void)addSelection:(struct CGPDFSelection { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)html;
- (id)init;
- (id)plainText;
- (id)webArchiveData;

@end

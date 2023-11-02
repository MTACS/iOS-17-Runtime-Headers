
@interface SFQuickLookDocumentWriter : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _filePathAccessedOnDispatchQueue;
    bool  _hasFinishedWriting;
    SFQuickLookDocument * _quickLookDocument;
}

@property (nonatomic, copy) NSString *filePathAccessedOnDispatchQueue;
@property (nonatomic, readonly) bool hasFinishedWriting;
@property (nonatomic, readonly) SFQuickLookDocument *quickLookDocument;

- (void).cxx_destruct;
- (id)filePathAccessedOnDispatchQueue;
- (bool)hasFinishedWriting;
- (id)initWithFileName:(id)arg1 uti:(id)arg2;
- (id)quickLookDocument;
- (void)setFilePathAccessedOnDispatchQueue:(id)arg1;
- (void)writeDataAndClose:(id)arg1 completionHandler:(id /* block */)arg2;

@end

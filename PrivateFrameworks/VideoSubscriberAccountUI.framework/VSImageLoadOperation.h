
@interface VSImageLoadOperation : VSAsyncOperation {
    VSAuditToken * _auditToken;
    NSItemProvider * _itemProvider;
    bool  _nonAppInitiated;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredImageSize;
    VSOptional * _result;
    NSURLSessionTask * _task;
}

@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (getter=isNonAppInitiated, nonatomic) bool nonAppInitiated;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredImageSize;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) NSURLSessionTask *task;

- (void).cxx_destruct;
- (void)_beginFetchingDataFromURL:(id)arg1;
- (void)_finishWithImageData:(id)arg1 orError:(id)arg2;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithItemProvider:(id)arg1 preferredImageSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isNonAppInitiated;
- (id)itemProvider;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (id)result;
- (void)setAuditToken:(id)arg1;
- (void)setNonAppInitiated:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end

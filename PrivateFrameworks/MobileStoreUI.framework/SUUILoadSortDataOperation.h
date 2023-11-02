
@interface SUUILoadSortDataOperation : SUUILoadResourceOperation {
    SSVLoadURLOperation * _underlyingOperation;
}

@property (readonly, copy) SUUISortDataRequest *resourceRequest;
@property SSVLoadURLOperation *underlyingOperation;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)arg1;
- (void)main;
- (void)setUnderlyingOperation:(id)arg1;
- (id)underlyingOperation;

@end

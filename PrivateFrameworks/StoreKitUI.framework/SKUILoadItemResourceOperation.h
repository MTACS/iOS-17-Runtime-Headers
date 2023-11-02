
@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation {
    SSVPlatformRequestOperation * _underlyingOperation;
}

@property (readonly, copy) SKUIItemResourceRequest *resourceRequest;
@property SSVPlatformRequestOperation *underlyingOperation;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)arg1;
- (void)main;
- (void)setUnderlyingOperation:(id)arg1;
- (id)underlyingOperation;

@end

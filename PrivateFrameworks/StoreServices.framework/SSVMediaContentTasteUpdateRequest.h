
@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding> {
    NSArray * _contentTasteItemUpdates;
    bool  _shouldInvalidateLocalCache;
}

@property (nonatomic, copy) NSArray *contentTasteItemUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldInvalidateLocalCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentTasteItemUpdates;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setContentTasteItemUpdates:(id)arg1;
- (void)setShouldInvalidateLocalCache:(bool)arg1;
- (bool)shouldInvalidateLocalCache;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
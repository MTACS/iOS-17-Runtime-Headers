
@interface _SFXPCAsyncIterator : NSObject <Sharing._SFXPCAsyncIteratorProtocol> {
    void containerRegistry;
    void iterator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)xpcNextWithCompletion:(id /* block */)arg1;

@end

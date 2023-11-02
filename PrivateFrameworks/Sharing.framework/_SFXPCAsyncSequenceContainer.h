
@interface _SFXPCAsyncSequenceContainer : NSObject <Sharing._SFXPCAsyncSequenceContainerProtocol> {
    void containerRegistry;
    void name;
    void sequences;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)xpcMakeAsyncIteratorFor:(id)arg1 completion:(id /* block */)arg2;

@end

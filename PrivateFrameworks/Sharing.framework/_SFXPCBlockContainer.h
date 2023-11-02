
@interface _SFXPCBlockContainer : NSObject <_SFXPCBlockContainerProtocol> {
    void containerRegistry;
    void name;
    void registeredAsyncBlocks;
    void registeredSyncBlocks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invoke:(id)arg1 parametersData:(id)arg2 parametersAsyncSequenceContainer:(id)arg3 parametersBlocksContainer:(id)arg4 sync:(bool)arg5 completion:(id /* block */)arg6;

@end


@interface GEOAPShowEvalHandler : NSObject <GEOAPXPCClientExporting> {
    id /* block */  _visitorBlock;
    NSObject<OS_dispatch_semaphore> * _wait;
    NSXPCConnection * _xpcConn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)endEvalData;
- (void)evalData:(id)arg1 ofType:(unsigned long long)arg2 createTime:(id)arg3;
- (void)visit;

@end

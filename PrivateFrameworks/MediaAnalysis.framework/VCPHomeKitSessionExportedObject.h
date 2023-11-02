
@interface VCPHomeKitSessionExportedObject : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {
    VCPHomeKitAnalysisSession * _weakSession;
}

@property (nonatomic) VCPHomeKitAnalysisSession *weakSession;

- (void).cxx_destruct;
- (void)processResults:(id)arg1 withReply:(id /* block */)arg2;
- (void)setWeakSession:(id)arg1;
- (id)weakSession;

@end


@interface SiriCoreAceConnectionAnalysisInfo : NSObject {
    SiriCoreConnectionType * _connectionType;
    NSURL * _connectionURL;
    int  _interfaceIndex;
    NSString * _policyId;
    NSNumber * _sendBufferSize;
    bool  _wwanPreferred;
}

@property (nonatomic, readonly) SiriCoreConnectionType *connectionType;
@property (nonatomic, readonly) NSURL *connectionURL;
@property (nonatomic, readonly) int interfaceIndex;
@property (nonatomic, copy) NSString *policyId;
@property (nonatomic, readonly, copy) NSNumber *sendBufferSize;
@property (nonatomic, readonly) bool wwanPreferred;

- (void).cxx_destruct;
- (id)connectionType;
- (id)connectionURL;
- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(bool)arg4 connectionType:(id)arg5 policyId:(id)arg6;
- (int)interfaceIndex;
- (id)policyId;
- (id)sendBufferSize;
- (void)setPolicyId:(id)arg1;
- (bool)wwanPreferred;

@end

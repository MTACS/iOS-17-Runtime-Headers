
@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying> {
    NSNumber * _intent;
    NSNumber * _requestedProtocol;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSString * _transferFileDesignator;
}

@property (nonatomic, copy) NSNumber *intent;
@property (nonatomic, copy) NSNumber *requestedProtocol;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSString *transferFileDesignator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)intent;
- (id)requestedProtocol;
- (id)serverSideProcessingTimeout;
- (void)setIntent:(id)arg1;
- (void)setRequestedProtocol:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransferFileDesignator:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transferFileDesignator;

@end

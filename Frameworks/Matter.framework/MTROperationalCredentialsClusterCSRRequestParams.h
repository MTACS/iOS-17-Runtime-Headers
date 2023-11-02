
@interface MTROperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying> {
    NSData * _csrNonce;
    NSNumber * _isForUpdateNOC;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *csrNonce;
@property (nonatomic, copy) NSNumber *isForUpdateNOC;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csrNonce;
- (id)description;
- (id)init;
- (id)isForUpdateNOC;
- (id)serverSideProcessingTimeout;
- (void)setCsrNonce:(id)arg1;
- (void)setIsForUpdateNOC:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end

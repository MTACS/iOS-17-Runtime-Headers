
@interface MTROperationalCredentialsClusterAddTrustedRootCertificateParams : NSObject <NSCopying> {
    NSData * _rootCACertificate;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *rootCACertificate;
@property (nonatomic, copy) NSData *rootCertificate;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)rootCACertificate;
- (id)rootCertificate;
- (id)serverSideProcessingTimeout;
- (void)setRootCACertificate:(id)arg1;
- (void)setRootCertificate:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end

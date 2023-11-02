
@interface MTROperationalCredentialsClusterAddNOCParams : NSObject <NSCopying> {
    NSNumber * _adminVendorId;
    NSNumber * _caseAdminSubject;
    NSData * _icacValue;
    NSData * _ipkValue;
    NSData * _nocValue;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *adminVendorId;
@property (nonatomic, copy) NSNumber *caseAdminSubject;
@property (nonatomic, copy) NSData *icacValue;
@property (nonatomic, copy) NSData *ipkValue;
@property (nonatomic, copy) NSData *nocValue;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)adminVendorId;
- (id)caseAdminSubject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)icacValue;
- (id)init;
- (id)ipkValue;
- (id)nocValue;
- (id)serverSideProcessingTimeout;
- (void)setAdminVendorId:(id)arg1;
- (void)setCaseAdminSubject:(id)arg1;
- (void)setIcacValue:(id)arg1;
- (void)setIpkValue:(id)arg1;
- (void)setNocValue:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end

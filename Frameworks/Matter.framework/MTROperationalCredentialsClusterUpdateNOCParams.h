
@interface MTROperationalCredentialsClusterUpdateNOCParams : NSObject <NSCopying> {
    NSData * _icacValue;
    NSData * _nocValue;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *icacValue;
@property (nonatomic, copy) NSData *nocValue;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)icacValue;
- (id)init;
- (id)nocValue;
- (id)serverSideProcessingTimeout;
- (void)setIcacValue:(id)arg1;
- (void)setNocValue:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end

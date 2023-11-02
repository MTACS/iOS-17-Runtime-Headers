
@interface OspreyConnectionMetrics : NSObject {
    unsigned long long  _connectionState;
    NSURLSessionTaskTransactionMetrics * _metrics;
}

@property (nonatomic, readonly) double connectionEstablishmentTime;
@property (nonatomic, readonly) NSString *connectionMethod;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (nonatomic, readonly) double dnsResolutionTime;
@property (nonatomic, readonly) double fetchStartToDomainLookupStartTime;
@property (nonatomic, readonly) double fetchStartToFirstByteTime;
@property (nonatomic, readonly) NSURL *requestURL;
@property (nonatomic, readonly) double secureConnectionTime;
@property (nonatomic, readonly) double tcpConnectTime;

- (void).cxx_destruct;
- (double)connectionEstablishmentTime;
- (id)connectionMethod;
- (unsigned long long)connectionState;
- (double)dnsResolutionTime;
- (double)fetchStartToDomainLookupStartTime;
- (double)fetchStartToFirstByteTime;
- (id)initWithMetrics:(id)arg1;
- (id)requestURL;
- (double)secureConnectionTime;
- (double)tcpConnectTime;

@end

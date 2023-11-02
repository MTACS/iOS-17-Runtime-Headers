
@interface SUCoreEventReporterActive : NSObject <NSSecureCoding> {
    long long  _attemptedSendCount;
    long long  _discoveredCancelingCount;
    long long  _discoveredRunningCount;
    long long  _discoveredSuspendedCount;
    long long  _failedSendCount;
    NSURL * _serverURL;
}

@property (nonatomic) long long attemptedSendCount;
@property (nonatomic) long long discoveredCancelingCount;
@property (nonatomic) long long discoveredRunningCount;
@property (nonatomic) long long discoveredSuspendedCount;
@property (nonatomic) long long failedSendCount;
@property (nonatomic, retain) NSURL *serverURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)attemptedSendCount;
- (id)copy;
- (id)description;
- (long long)discoveredCancelingCount;
- (long long)discoveredRunningCount;
- (long long)discoveredSuspendedCount;
- (void)encodeWithCoder:(id)arg1;
- (long long)failedSendCount;
- (id)initFromArchivedData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serverURL;
- (void)setAttemptedSendCount:(long long)arg1;
- (void)setDiscoveredCancelingCount:(long long)arg1;
- (void)setDiscoveredRunningCount:(long long)arg1;
- (void)setDiscoveredSuspendedCount:(long long)arg1;
- (void)setFailedSendCount:(long long)arg1;
- (void)setServerURL:(id)arg1;
- (id)summary;
- (id)toArchivedData;

@end

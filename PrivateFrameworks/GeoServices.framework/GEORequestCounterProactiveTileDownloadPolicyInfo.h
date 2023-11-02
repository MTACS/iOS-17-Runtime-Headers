
@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding> {
    unsigned long long  _bytesDownloaded;
    NSDate * _endTimestamp;
    unsigned long long  _failureCount;
    unsigned char  _policy;
    NSDate * _startTimestamp;
    unsigned long long  _successCount;
    unsigned long long  _tilesConsidered;
}

@property (nonatomic, readonly) unsigned long long bytesDownloaded;
@property (nonatomic, readonly) NSDate *endTimestamp;
@property (nonatomic, readonly) unsigned long long failureCount;
@property (nonatomic, readonly) unsigned char policy;
@property (nonatomic, readonly) NSDate *startTimestamp;
@property (nonatomic, readonly) unsigned long long successCount;
@property (nonatomic, readonly) unsigned long long tilesConsidered;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bytesDownloaded;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimestamp;
- (unsigned long long)failureCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicy:(unsigned char)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 tilesConsidered:(unsigned long long)arg4 successCount:(unsigned long long)arg5 failureCount:(unsigned long long)arg6 bytesDownloaded:(unsigned long long)arg7;
- (unsigned char)policy;
- (id)startTimestamp;
- (unsigned long long)successCount;
- (unsigned long long)tilesConsidered;

@end

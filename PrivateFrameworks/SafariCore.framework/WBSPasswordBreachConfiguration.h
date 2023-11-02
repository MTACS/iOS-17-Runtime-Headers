
@interface WBSPasswordBreachConfiguration : NSObject <NSCopying> {
    unsigned long long  _fakePasswordLengthBytes;
    NSString * _highFrequencyBucketHashSalt;
    unsigned long long  _highFrequencyBucketHashWorkFactor;
    unsigned long long  _highFrequencyBucketScryptBlockSizeR;
    unsigned long long  _highFrequencyBucketScryptParallelismFactorP;
    NSURL * _highFrequencyBucketURL;
    bool  _isInternalBuild;
    unsigned long long  _lowFrequencyBucketFetchTimeout;
    NSString * _lowFrequencyBucketHashSalt;
    unsigned long long  _lowFrequencyBucketHashWorkFactor;
    unsigned long long  _lowFrequencyBucketIdentifierBitCount;
    unsigned long long  _lowFrequencyBucketScryptBlockSizeR;
    unsigned long long  _lowFrequencyBucketScryptParallelismFactorP;
    NSURL * _lowFrequencyBucketURL;
    double  _minimumDelayBetweenSessions;
    unsigned long long  _numberOfBatchesPerSession;
    unsigned long long  _passwordCheckBatchSize;
    bool  _shouldRefillBagWhenEmpty;
    NSURLSessionConfiguration * _urlSessionConfiguration;
    bool  _verboseSensitiveLoggingEnabled;
}

@property (nonatomic, readonly) unsigned long long fakePasswordLengthBytes;
@property (nonatomic, readonly) NSString *highFrequencyBucketHashSalt;
@property (nonatomic, readonly) unsigned long long highFrequencyBucketHashWorkFactor;
@property (nonatomic, readonly) unsigned long long highFrequencyBucketScryptBlockSizeR;
@property (nonatomic, readonly) unsigned long long highFrequencyBucketScryptParallelismFactorP;
@property (nonatomic, readonly) NSURL *highFrequencyBucketURL;
@property (nonatomic, readonly) unsigned long long lowFrequencyBucketFetchTimeout;
@property (nonatomic, readonly) NSString *lowFrequencyBucketHashSalt;
@property (nonatomic, readonly) unsigned long long lowFrequencyBucketHashWorkFactor;
@property (nonatomic, readonly) unsigned long long lowFrequencyBucketIdentifierBitCount;
@property (nonatomic, readonly) unsigned long long lowFrequencyBucketScryptBlockSizeR;
@property (nonatomic, readonly) unsigned long long lowFrequencyBucketScryptParallelismFactorP;
@property (nonatomic, readonly) NSURL *lowFrequencyBucketURL;
@property (nonatomic, readonly) double minimumDelayBetweenSessions;
@property (nonatomic, readonly) unsigned long long numberOfBatchesPerSession;
@property (nonatomic, readonly) unsigned long long passwordCheckBatchSize;
@property (nonatomic, readonly) bool shouldRefillBagWhenEmpty;
@property (nonatomic, readonly) NSURLSessionConfiguration *urlSessionConfiguration;
@property (nonatomic, readonly) bool verboseSensitiveLoggingEnabled;

+ (id)standardConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fakePasswordLengthBytes;
- (id)highFrequencyBucketHashSalt;
- (unsigned long long)highFrequencyBucketHashWorkFactor;
- (unsigned long long)highFrequencyBucketScryptBlockSizeR;
- (unsigned long long)highFrequencyBucketScryptParallelismFactorP;
- (id)highFrequencyBucketURL;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 protocolClasses:(id)arg2 allowValuesForTesting:(bool)arg3;
- (bool)isVerboseSensitiveLoggingEnabled;
- (unsigned long long)lowFrequencyBucketFetchTimeout;
- (id)lowFrequencyBucketHashSalt;
- (unsigned long long)lowFrequencyBucketHashWorkFactor;
- (unsigned long long)lowFrequencyBucketIdentifierBitCount;
- (unsigned long long)lowFrequencyBucketScryptBlockSizeR;
- (unsigned long long)lowFrequencyBucketScryptParallelismFactorP;
- (id)lowFrequencyBucketURL;
- (double)minimumDelayBetweenSessions;
- (unsigned long long)numberOfBatchesPerSession;
- (unsigned long long)passwordCheckBatchSize;
- (bool)shouldRefillBagWhenEmpty;
- (id)urlSessionConfiguration;
- (bool)verboseSensitiveLoggingEnabled;

@end

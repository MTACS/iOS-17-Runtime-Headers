
@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    double  _completeTime;
    double  _createTime;
    __CFN_TransactionMetrics * _currentTransactionMetrics;
    double  _firstResumeTime;
    unsigned long long  _identifier;
    bool  _ignoreNextRedirection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _options;
    int  _pidForHAR;
    long long  _schedulingTier;
    NSString * _sourceApplicationBundleIdentifier;
    NSMutableArray * _transactionMetrics;
}

@property (readonly) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;
@property (nonatomic, readonly) NSMutableArray *_daemon_transactionMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_daemon_currentTransactionMetrics;
- (id)_daemon_transactionMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

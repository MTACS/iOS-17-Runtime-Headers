
@interface SFDownloadStorageUsageMonitorEntry : NSObject {
    long long  _cachedUsage;
    <SFDownloadStorageUsageMonitorEntryDelegate> * _delegate;
    NSString * _destinationPath;
    NSUUID * _identifier;
    NSProgress * _progress;
    NSData * _progressData;
    id  _progressSubscriber;
}

@property (nonatomic) long long cachedUsage;
@property (nonatomic) <SFDownloadStorageUsageMonitorEntryDelegate> *delegate;
@property (nonatomic, retain) NSString *destinationPath;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) NSData *progressData;
@property (nonatomic, retain) id progressSubscriber;

- (void).cxx_destruct;
- (void)_didGainProgress:(id)arg1;
- (void)_didLoseProgress:(id)arg1;
- (void)_updateProgressSubscriptionWithData:(id)arg1;
- (long long)cachedUsage;
- (id)delegate;
- (id)destinationPath;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (id)progressData;
- (id)progressSubscriber;
- (void)setCachedUsage:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationPath:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressData:(id)arg1;
- (void)setProgressSubscriber:(id)arg1;
- (void)updateWithDictionaryRepresentation:(id)arg1;

@end

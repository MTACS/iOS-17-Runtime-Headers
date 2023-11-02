
@interface PGGraphUpdateJetsamIndicator : NSObject {
    bool  _indicatorExists;
    NSURL * _indicatorURL;
    long long  _maxRetryCount;
    long long  _retryCount;
}

@property (nonatomic) bool indicatorExists;
@property (nonatomic, readonly) NSURL *indicatorURL;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long retryCount;
@property (nonatomic, readonly) bool updateDidCauseJetsam;

- (void).cxx_destruct;
- (void)_readIndicator;
- (void)_removeIndicator;
- (void)clear;
- (id)description;
- (bool)indicatorExists;
- (id)indicatorURL;
- (id)initWithIndicatorDirectoryURL:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)markUpdate;
- (long long)maxRetryCount;
- (long long)retryCount;
- (void)setIndicatorExists:(bool)arg1;
- (void)setMaxRetryCount:(long long)arg1;
- (void)setRetryCount:(long long)arg1;
- (bool)updateDidCauseJetsam;

@end

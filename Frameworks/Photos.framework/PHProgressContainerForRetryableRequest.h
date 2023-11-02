
@interface PHProgressContainerForRetryableRequest : NSObject {
    long long  _currentPendingCount;
    NSProgress * _currentRequestProgress;
    NSProgress * _totalProgress;
}

@property (nonatomic, readonly) NSProgress *totalProgress;

- (void).cxx_destruct;
- (id)init;
- (void)setRequestProgress:(id)arg1;
- (id)totalProgress;

@end

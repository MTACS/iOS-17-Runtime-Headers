
@interface AXPhoenixDataCollectionManager : NSObject {
    <AXPhoenixDataCollectionManagerDelegate> * _delegate;
    bool  _isRunning;
    long long  _packagesRemaining;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _uploadErrorMessage;
}

@property (nonatomic) <AXPhoenixDataCollectionManagerDelegate> *delegate;
@property (nonatomic) bool isRunning;
@property (nonatomic) long long packagesRemaining;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *uploadErrorMessage;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (bool)isRunning;
- (long long)packagesRemaining;
- (id)queue;
- (void)removeOldData;
- (void)reportFalsePositive:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setPackagesRemaining:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setUploadErrorMessage:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerTick;
- (void)updateUploadStatus:(long long)arg1 error:(id)arg2;
- (id)uploadErrorMessage;
- (void)uploadPackages;

@end

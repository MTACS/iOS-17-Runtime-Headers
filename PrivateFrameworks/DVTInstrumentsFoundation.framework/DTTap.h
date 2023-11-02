
@interface DTTap : NSObject {
    DTTapConfig * _config;
    bool  _isRunning;
    DTTapMemoHandler * _memoHandler;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _tapID;
}

@property (nonatomic, readonly, retain) DTTapConfig *config;
@property (nonatomic) bool isRunning;
@property (nonatomic, readonly, retain) DTTapMemoHandler *memoHandler;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) unsigned int tapID;
@property (nonatomic, readonly, retain) NSString *uuid;

- (void).cxx_destruct;
- (bool)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (void)_pause;
- (void)_start;
- (void)_stop;
- (void)_unpause;
- (id)config;
- (id)fetchDataNow;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2;
- (bool)isRunning;
- (id)memoHandler;
- (id)pause;
- (void)resumeDataProcessing;
- (id)serialQueue;
- (void)setIsRunning:(bool)arg1;
- (id)start;
- (id)stop;
- (void)suspendDataProcessing;
- (unsigned int)tapID;
- (id)unpause;
- (id)uuid;

@end

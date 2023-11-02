
@interface ENDownloadTask : NSObject {
    NSDate * _date;
    bool  _didDefer;
    unsigned long long  _downloadCount;
    ENDownloadEndpointState * _endpointState;
    bool  _finished;
    NSObject<OS_dispatch_group> * _group;
    NSBackgroundActivityScheduler * _scheduler;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) bool didDefer;
@property (nonatomic, readonly) unsigned long long downloadCount;
@property (nonatomic, readonly) ENDownloadEndpointState *endpointState;
@property (nonatomic, readonly, copy) NSString *shortIdentifier;
@property (nonatomic, readonly) bool shouldDefer;

+ (id)taskWithEndpointState:(id)arg1 date:(id)arg2 group:(id)arg3 scheduler:(id)arg4;

- (void).cxx_destruct;
- (id)date;
- (bool)didDefer;
- (unsigned long long)downloadCount;
- (id)endpointState;
- (void)finishDeferred:(bool)arg1 error:(id)arg2;
- (void)incrementDownloadCount;
- (id)shortIdentifier;
- (bool)shouldDefer;

@end

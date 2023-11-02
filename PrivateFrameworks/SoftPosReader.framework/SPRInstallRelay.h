
@interface SPRInstallRelay : NSObject <SPRInstallDelegate> {
    <SPRInstallDelegate> * _base;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) <SPRInstallDelegate> *base;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)base;
- (id)initWithBase:(id)arg1 queue:(id)arg2;
- (void)onFailureWithError:(id)arg1;
- (void)onSuccessWithInstallData:(id)arg1;
- (void)onUpdateWithEvent:(long long)arg1;
- (void)onUpdateWithEvent:(long long)arg1 progress:(long long)arg2;
- (id)queue;

@end

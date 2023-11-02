
@interface STFileProviderMonitor : NSObject {
    id  _fpContext;
    NSArray * _fpDomains;
}

@property (retain) id fpContext;
@property (retain) NSArray *fpDomains;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_postNotify:(id)arg1;
- (id)fpContext;
- (id)fpDomains;
- (void)postNotify;
- (void)setFpContext:(id)arg1;
- (void)setFpDomains:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;
- (void)sync;

@end

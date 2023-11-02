
@interface CSLanguageDetectorAssetMonitor : NSObject {
    <CSLanguageDetectorAssetMonitorDelegate> * _delegate;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSLanguageDetectorAssetMonitorDelegate> *delegate;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_supportedLocale:(id /* block */)arg1;
- (id)delegate;
- (id)init;
- (int)notifyToken;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)startMonitor;
- (void)supportedLocale:(id /* block */)arg1;

@end

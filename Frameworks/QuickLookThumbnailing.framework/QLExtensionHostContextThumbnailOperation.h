
@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation {
    unsigned long long  _badgeType;
    id /* block */  _cleanupTemporaryFileHandler;
    id /* block */  _completionHandler;
    NSOperationQueue * _coordinationQueue;
    NSFileCoordinator * _coordinator;
    NSObject<OS_dispatch_semaphore> * _generationSemaphore;
    NSDictionary * _generatorData;
    QLThumbnailHostContext * _hostContext;
    int  _iconFlavor;
    int  _interpolationQuality;
    QLThumbnailItem * _item;
    double  _minimumSize;
    double  _scale;
    id /* block */  _serviceErrorHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _wantsLowQuality;
}

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, copy) id /* block */ cleanupTemporaryFileHandler;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSOperationQueue *coordinationQueue;
@property (nonatomic, retain) NSFileCoordinator *coordinator;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *generationSemaphore;
@property (nonatomic, retain) NSDictionary *generatorData;
@property (nonatomic, retain) QLThumbnailHostContext *hostContext;
@property (nonatomic) int iconFlavor;
@property (nonatomic) int interpolationQuality;
@property (nonatomic, retain) QLThumbnailItem *item;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic, copy) id /* block */ serviceErrorHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool wantsLowQuality;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (id /* block */)cleanupTemporaryFileHandler;
- (id /* block */)completionHandler;
- (id)coordinationQueue;
- (id)coordinator;
- (void)finish;
- (id)generationSemaphore;
- (id)generatorData;
- (id)hostContext;
- (int)iconFlavor;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 iconFlavor:(int)arg7 generatorData:(id)arg8 interpolationQuality:(int)arg9 wantsLowQuality:(bool)arg10 completionHandler:(id /* block */)arg11 serviceErrorHandler:(id /* block */)arg12;
- (int)interpolationQuality;
- (id)item;
- (void)main;
- (double)minimumSize;
- (double)scale;
- (id /* block */)serviceErrorHandler;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setCleanupTemporaryFileHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCoordinationQueue:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setGenerationSemaphore:(id)arg1;
- (void)setGeneratorData:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setIconFlavor:(int)arg1;
- (void)setInterpolationQuality:(int)arg1;
- (void)setItem:(id)arg1;
- (void)setMinimumSize:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setServiceErrorHandler:(id /* block */)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWantsLowQuality:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)wantsLowQuality;

@end

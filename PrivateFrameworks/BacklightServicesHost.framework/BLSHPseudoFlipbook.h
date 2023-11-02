
@interface BLSHPseudoFlipbook : NSObject <BLSHFlipbook> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_activeFrames;
    unsigned long long  _lock_nextframeID;
    bool  _lock_powerSavingEnabled;
}

@property (nonatomic, readonly) NSArray *activeFrames;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *captureFrameOnGlass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *frameOnGlass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *lastRenderedFrame;
@property (nonatomic, readonly) unsigned long long memoryUsage;
@property (getter=isPowerSavingEnabled, nonatomic) bool powerSavingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeFrames;
- (id)cancelAllFrames;
- (id)captureFrameOnGlass;
- (void)collect;
- (id)frameOnGlass;
- (id)init;
- (void)invalidate;
- (bool)isPowerSavingEnabled;
- (id)lastRenderedFrame;
- (unsigned long long)memoryUsage;
- (void)purge;
- (void)renderFrameForPresentation:(id)arg1 dateSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setPowerSavingEnabled:(bool)arg1;

@end

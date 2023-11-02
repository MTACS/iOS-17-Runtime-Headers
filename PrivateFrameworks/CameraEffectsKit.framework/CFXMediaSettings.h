
@interface CFXMediaSettings : NSObject <JFXMediaSettingsProvider> {
    int  _frameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
    int  _timeScale;
}

@property (nonatomic) struct CGSize { double x1; double x2; } compositionSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } frameSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGSize { double x1; double x2; } renderSize;
@property (readonly) Class superclass;
@property (nonatomic) int timeScale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })compositionSize;
- (int)frameRate;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)init;
- (id)queue;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setCompositionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrameRate:(int)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setQueue:(id)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeScale:(int)arg1;
- (int)timeScale;

@end

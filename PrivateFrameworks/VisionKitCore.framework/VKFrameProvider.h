
@interface VKFrameProvider : NSObject <NSLocking> {
    VKFrameProviderConfiguration * _configuration;
    <VKFrameProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _delegateRespondsToLuminosityChanges;
    bool  _delegateRespondsToStabilityChanges;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UIView * _previewView;
    bool  _processing;
    NSMutableArray * _processors;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    double  _sceneLuminosity;
    unsigned long long  _sceneStabilityState;
}

@property (nonatomic, readonly) VKFrameProviderConfiguration *configuration;
@property (nonatomic, readonly) <VKFrameProviderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) bool isProcessing;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) UIView *previewView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isProcessing;
- (bool)isRunning;
- (void)lock;
- (id)previewView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (void)registerProcessor:(id)arg1;
- (void)resetAllProcessors;
- (void)sendFrame:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startProcessing;
- (void)startRunning;
- (void)stopProcessing;
- (void)stopRunning;
- (void)unlock;
- (void)unregisterProcessor:(id)arg1;

@end

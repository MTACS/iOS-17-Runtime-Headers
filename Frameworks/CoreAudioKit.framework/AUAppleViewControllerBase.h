
@interface AUAppleViewControllerBase : UIViewController {
    struct OpaqueAudioComponentInstance { } * AU;
    bool  _needsRealtimeDrawing;
    double  _realtimeDrawingInterval;
    UIColor * _tintColor;
    bool  auRendering;
    struct AUListenerBase { } * eventListener;
    bool  initialized;
    double  lastRenderedSampleTime;
    NSArray * topLevelObjects;
}

@property bool needsRealtimeDrawing;
@property double realtimeDrawingInterval;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)customViewLogger;
+ (id)getLocalizedString:(id)arg1;

- (void).cxx_destruct;
- (struct OpaqueAudioComponentInstance { }*)au;
- (void)cleanup;
- (void)doRealtimeDrawing;
- (struct AudioUnitParameterInfo { BOOL x1[52]; struct __CFString {} *x2; unsigned int x3; struct __CFString {} *x4; unsigned int x5; float x6; float x7; float x8; unsigned int x9; })getParameterInfo:(unsigned int)arg1 scope:(unsigned int)arg2;
- (void)handleBeginGesture:(unsigned int)arg1;
- (void)handleEndGesture:(unsigned int)arg1;
- (void)handleParameterListChanged;
- (bool)needsRealtimeDrawing;
- (void)postBeginGestureNotificationForParameter:(unsigned int)arg1;
- (void)postEndGestureNotificationForParameter:(unsigned int)arg1;
- (void)prepareData;
- (void)priv_addListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)priv_eventListener:(void*)arg1 event:(const struct AudioUnitEvent { unsigned int x1; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; } x_2_1_1; struct AudioUnitProperty { struct OpaqueAudioComponentInstance {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; } x2; }*)arg2 value:(float)arg3;
- (void)priv_removeListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)priv_removeListeners;
- (double)realtimeDrawingInterval;
- (void)registerParameters;
- (void)setAU:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setNeedsRealtimeDrawing:(bool)arg1;
- (void)setRealtimeDrawingInterval:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)synchronizeUIWithParameterValues;
- (id)tintColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

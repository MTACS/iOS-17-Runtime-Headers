
@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {
    CMActivityManager * _activityManager;
    <GEOMotionContextProviderDelegate> * _delegate;
    MNTraceRecorder * _traceRecorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <GEOMotionContextProviderDelegate> *motionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTraceRecorder:(id)arg1;
- (id)motionDelegate;
- (void)setMotionDelegate:(id)arg1;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;

@end

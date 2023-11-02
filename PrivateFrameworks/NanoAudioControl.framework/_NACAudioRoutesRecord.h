
@interface _NACAudioRoutesRecord : NSObject {
    NSArray * _audioRoutes;
    NSArray * _deferredAudioRoutes;
    NSMutableSet * _observers;
    double  _timestamp;
}

@property (nonatomic, retain) NSArray *audioRoutes;
@property (nonatomic, retain) NSArray *deferredAudioRoutes;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)audioRoutes;
- (id)deferredAudioRoutes;
- (id)observers;
- (void)setAudioRoutes:(id)arg1;
- (void)setDeferredAudioRoutes:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

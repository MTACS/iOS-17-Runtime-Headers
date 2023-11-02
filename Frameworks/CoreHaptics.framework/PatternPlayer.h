
@interface PatternPlayer : PatternPlayerBase <CHHapticPatternPlayerExtended> {
    AVHapticPlayerChannel * _channel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isMuted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)cancelAndReturnError:(id*)arg1;
- (void)clearExternalResources:(id)arg1;
- (void)dealloc;
- (void)doSetMute:(bool)arg1;
- (id)init;
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(bool)arg3 error:(id*)arg4;
- (bool)isMuted;
- (id)processImmediateParameters:(id)arg1;
- (void)releaseExternalResources:(id)arg1 events:(id)arg2;
- (bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (void)setIsMuted:(bool)arg1;
- (bool)startAtTime:(double)arg1 error:(id*)arg2;
- (bool)startAtTime:(double)arg1 withImmediateParameters:(id)arg2 error:(id*)arg3;
- (bool)stopAtTime:(double)arg1 error:(id*)arg2;

@end

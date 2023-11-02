
@interface VCMediaDevice : VCObject <VCMediaDeviceDelegate, VCMediaDeviceProtocol> {
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)autoRunOnStart;
- (bool)canEnterState:(unsigned int)arg1;
- (id)init;
- (id)onPause;
- (id)onResume;
- (id)onRun;
- (id)onStart;
- (id)onStop;
- (id)pause;
- (id)resume;
- (id)run;
- (id)runInternal;
- (id)start;
- (id)stateStringForState:(unsigned int)arg1;
- (id)stop;

@end


@interface CSSiriAudioSession : NSObject {
    CSSiriAudioRoute * _inputRoute;
    CSSiriAudioRoute * _outputRoute;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)currentInputDeviceUIDArray;
+ (id)sharedSession;

- (void).cxx_destruct;
- (id)currentInputRoute;
- (id)currentOutputRoute;
- (id)init;

@end

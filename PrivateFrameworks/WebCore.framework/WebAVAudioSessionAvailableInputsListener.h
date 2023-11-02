
@interface WebAVAudioSessionAvailableInputsListener : NSObject {
    void * _callback;
}

- (id)initWithCallback:(void*)arg1 audioSession:(id)arg2;
- (void)invalidate;
- (void)routeDidChange:(id)arg1;

@end

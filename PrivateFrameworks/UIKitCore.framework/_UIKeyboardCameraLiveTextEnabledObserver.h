
@interface _UIKeyboardCameraLiveTextEnabledObserver : NSObject {
    bool  _isLiveTextEnabled;
    bool  _isLiveTextEnabledIsValid;
}

@property (readonly) bool isLiveTextEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (bool)isLiveTextEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end


@interface VCSpeechFrameworkWrapper : NSObject {
    bool  _isFrameworkLoaded;
}

@property (nonatomic, readonly) bool frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)findSpeechFrameworkPath;
- (bool)frameworkLoaded;
- (id)init;
- (bool)loadSpeechFramework;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)arg1;
- (id)supportedLocales;

@end

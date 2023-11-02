
@interface CACSpeechRecognizer : NSObject {
    bool  _avoidMessagingRXDuringCancel;
    id  _delegate;
    bool  _isListening;
    CACLanguageModel * _languageModel;
    NSString * _name;
    bool  _numberMode;
    bool  _preventRecognizedTextFeedback;
    struct __RXRecognizer { } * _recognizer;
    unsigned long long  _recognizerFlags;
    bool  _requestCloseMatchResults;
    struct __RXLanguageObject { } * _rxLanguageModel;
    bool  _spellingMode;
    bool  _waitingForResponse;
}

@property (retain) NSString *name;
@property bool numberMode;
@property (nonatomic) bool preventRecognizedTextFeedback;
@property unsigned long long recognizerFlags;
@property bool requestCloseMatchResults;
@property (readonly) struct __RXLanguageObject { }*rxLanguageModel;
@property bool spellingMode;

- (void).cxx_destruct;
- (void)closeSpeechRecognizer;
- (void)dealloc;
- (bool)isListening;
- (bool)isSpeechRecognizerOpen;
- (id)languageModel;
- (id)name;
- (bool)numberMode;
- (void)openSpeechRecognizer;
- (bool)preventRecognizedTextFeedback;
- (unsigned long long)recognizerFlags;
- (void)registerSpeechCorrectionFromText:(id)arg1 toText:(id)arg2 forIdentifier:(id)arg3;
- (bool)requestCloseMatchResults;
- (struct __RXLanguageObject { }*)rxLanguageModel;
- (void)setCommandInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLanguageModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberMode:(bool)arg1;
- (void)setPreventRecognizedTextFeedback:(bool)arg1;
- (void)setRecognizerFlags:(unsigned long long)arg1;
- (void)setRequestCloseMatchResults:(bool)arg1;
- (void)setSpellingMode:(bool)arg1;
- (bool)spellingMode;
- (void)startListening;
- (void)stopListening;

@end

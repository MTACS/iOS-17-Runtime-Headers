
@interface SFSpeechRecognizer : NSObject <AFDictationDelegate, CXCallObserverDelegate> {
    CXCallObserver * _callObserver;
    long long  _defaultTaskHint;
    <SFSpeechRecognizerDelegate> * _delegate;
    AFDictationConnection * _dictationConnection;
    <NSObject> * _facetimeObserver;
    <NSObject> * _foregroundObserver;
    NSString * _languageCode;
    NSLocale * _locale;
    <NSObject> * _preferencesObserver;
    NSOperationQueue * _queue;
    bool  _supportsOnDeviceRecognition;
}

@property (getter=_isAvailableForForcedOfflineRecognition, nonatomic, readonly) bool _availableForForcedOfflineRecognition;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultTaskHint;
@property (nonatomic) <SFSpeechRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsOnDeviceRecognition;

+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(id /* block */)arg1;
+ (long long)authorizationStatus;
+ (void)initialize;
+ (void)requestAuthorization:(id /* block */)arg1;
+ (id)supportedLocales;

- (void).cxx_destruct;
- (bool)_isAvailableForForcedOfflineRecognition;
- (void)_prepareToRecognizeWithTaskHint:(long long)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_prepareToRecognizeWithTaskHint:(long long)arg1 completion:(id /* block */)arg2;
- (void)_requestOfflineDictationSupportForClientIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestOfflineDictationSupportWithCompletion:(id /* block */)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)dealloc;
- (long long)defaultTaskHint;
- (id)delegate;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (bool)isAvailable;
- (id)locale;
- (id)queue;
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setDefaultTaskHint:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSupportsOnDeviceRecognition:(bool)arg1;
- (bool)supportsOnDeviceRecognition;

@end

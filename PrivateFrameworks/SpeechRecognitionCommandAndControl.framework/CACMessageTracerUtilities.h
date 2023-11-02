
@interface CACMessageTracerUtilities : NSObject <SFSpeechRecognitionTaskDelegate, _SFSpeechRecognitionTaskDelegatePrivate> {
    NSDictionary * _customUserCommandProperties;
    NSString * _localeIdentifier;
    NSDictionary * _recognitionProperties;
    NSOperationQueue * _remoteSpeechOperationQueue;
    NSString * _targetApplicationIdentifier;
    NSString * _textAreaIdentifierOrLabel;
    NSString * _textAreaSelectionRange;
}

@property (nonatomic, retain) NSDictionary *customUserCommandProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSDictionary *recognitionProperties;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetApplicationIdentifier;
@property (nonatomic, retain) NSString *textAreaIdentifierOrLabel;
@property (nonatomic, retain) NSString *textAreaSelectionRange;

+ (id)sharedCACMessageTracerUtilities;

- (void).cxx_destruct;
- (id)_mutablePlistCompatibleObjectFromObject:(id)arg1;
- (void)_prepareToSendAudioDataToAppleServers;
- (id)customUserCommandProperties;
- (id)dictionaryOfNormallyStaticPreferenceValuesForCoreAnalytics;
- (id)init;
- (id)localeIdentifier;
- (void)logCommandWithIdentifier:(id)arg1;
- (id)recognitionProperties;
- (void)removeCachedAudioFile;
- (void)sendCoreAnalyticsForRecognizedCommandIdentifier:(id)arg1 appIdentifier:(id)arg2;
- (void)sendRecentAudioDataToAppleServers;
- (void)setCustomUserCommandProperties:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setRecognitionProperties:(id)arg1;
- (void)setTargetApplicationIdentifier:(id)arg1;
- (void)setTextAreaIdentifierOrLabel:(id)arg1;
- (void)setTextAreaSelectionRange:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (id)targetApplicationIdentifier;
- (id)textAreaIdentifierOrLabel;
- (id)textAreaSelectionRange;

@end

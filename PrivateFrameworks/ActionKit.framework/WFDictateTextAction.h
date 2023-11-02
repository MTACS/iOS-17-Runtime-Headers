
@interface WFDictateTextAction : WFAction <AFDictationDelegate> {
    <WFDictateTextActionUserInterface> * _actionUserInterface;
    AFDictationConnection * _dictationConnection;
    NSString * _latestTranscription;
}

@property (nonatomic, retain) <WFDictateTextActionUserInterface> *actionUserInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFDictationConnection *dictationConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *latestTranscription;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (bool)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (id)actionUserInterface;
- (void)cancel;
- (id)contentDestinationWithError:(id*)arg1;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)latestTranscription;
- (id)recognitionError;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 locale:(id)arg2 stopListeningValue:(id)arg3;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)setActionUserInterface:(id)arg1;
- (void)setDictationConnection:(id)arg1;
- (void)setLatestTranscription:(id)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)stopListening;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id)keyCommands;

@end

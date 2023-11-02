
@interface SUICVoiceSelectionPresenter : NSObject <SUICVoicePreviewingDelegate, SUICVoiceSelectionDataProviderObserving, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding> {
    <SUICVoiceSelectionDataManaging> * _dataManager;
    <SUICVoiceSelectionPresenterDelegate> * _delegate;
    bool  _reverseVoiceOrder;
    <SUICVoiceSelectionDisplaying> * _view;
    AFVoiceInfo * _voiceBeingPreviewed;
    SUICVoiceSelectionVoiceCollection * _voiceCollection;
    <SUICVoicePreviewing> * _voicePreviewer;
}

@property (nonatomic, readonly) <SUICVoiceSelectionDataManaging> *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SUICVoiceSelectionPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SUICVoiceSelectionDisplaying> *view;
@property (nonatomic, readonly, copy) SUICVoiceSelectionVoiceCollection *voiceCollection;
@property (nonatomic, readonly) <SUICVoicePreviewing> *voicePreviewer;
@property (nonatomic, readonly, copy) SUICVoiceSelectionViewModel *voiceSelectionViewModel;

- (void).cxx_destruct;
- (void)_determineVoiceOrdering;
- (id)_localizedDisplayNameForLanguageCode:(id)arg1;
- (void)_logVoicePreview:(id)arg1;
- (void)_previewVoice:(id)arg1 completion:(id /* block */)arg2;
- (void)_processVoiceSelection:(id)arg1 completion:(id /* block */)arg2;
- (id)_voiceCollection;
- (id)dataManager;
- (id)delegate;
- (id)initWithDataManaging:(id)arg1 view:(id)arg2 delegate:(id)arg3 voicePreviewing:(id)arg4 recognitionLanguage:(id)arg5;
- (void)selectRandomVoiceWithCompletion:(id /* block */)arg1;
- (void)stopVoicePreview;
- (id)view;
- (id)voiceCollection;
- (id)voicePreviewer;
- (void)voicePreviewerAudioOutputDidChangePowerLevel:(float)arg1;
- (void)voiceSelectionDataProviderVoiceCollectionDidChange:(id)arg1;
- (void)voiceSelectionView:(id)arg1 receivedRequestToSelectLanguage:(id)arg2;
- (void)voiceSelectionView:(id)arg1 receivedRequestToSelectVoice:(id)arg2;
- (id)voiceSelectionViewModel;

@end

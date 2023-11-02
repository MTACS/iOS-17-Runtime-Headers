
@interface SiriSharedUICompactViewModelController : NSObject {
    AFConversation * _conversation;
    <SiriSharedUICompactViewModelControllerDelegate> * _delegate;
    bool  _immersiveExperienceOn;
    NSMutableArray * _serverUtteranceConversationIds;
    SiriSharedUICompactViewModel * _viewModel;
    <SiriSharedUICompactViewModelChangeObserving> * _viewModelChangeObserver;
}

@property (nonatomic, readonly) bool alwaysShowRecognizedSpeech;
@property (nonatomic, readonly) AFConversation *conversation;
@property (nonatomic) <SiriSharedUICompactViewModelControllerDelegate> *delegate;
@property (nonatomic) bool immersiveExperienceOn;
@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) NSMutableArray *serverUtteranceConversationIds;
@property (nonatomic, copy) SiriSharedUICompactViewModel *viewModel;
@property (nonatomic) <SiriSharedUICompactViewModelChangeObserving> *viewModelChangeObserver;

- (void).cxx_destruct;
- (void)_clearAdditionalContentTranscriptItems;
- (unsigned long long)_generateDiffFromViewModel:(id)arg1 toViewModel:(id)arg2;
- (id)_instrumentationManager;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)arg1;
- (void)_processInitialConversationItems;
- (void)_processInsertedConversationItems:(id)arg1;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)arg1;
- (id)_serverUtterancesToDisplay;
- (id)_userUtteranceForConversationItem:(id)arg1;
- (bool)alwaysShowRecognizedSpeech;
- (id)conversation;
- (void)conversationDidChangeWithTransaction:(id)arg1;
- (id)delegate;
- (bool)immersiveExperienceOn;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (long long)inputType;
- (void)inputTypeDidChange;
- (void)resetViewsAndClearASR:(bool)arg1;
- (void)revealUserUtterance:(id)arg1 backingAceObject:(id)arg2;
- (id)serverUtteranceConversationIds;
- (void)setDelegate:(id)arg1;
- (void)setImmersiveExperienceOn:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)setViewModelChangeObserver:(id)arg1;
- (id)viewModel;
- (id)viewModelChangeObserver;

@end

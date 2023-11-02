
@interface TUCollaborationManager : NSObject <TUCollaborationProviderDelegate, TUConversationManagerDelegate> {
    <TUCollaborationProvider> * _collaborationProvider;
    NSMutableDictionary * _collaborationStateByIdentifier;
    NSMutableDictionary * _conversationsByHighlightIdentifier;
    <TUCollaborationManagerDelegate> * _delegate;
    <TUFeatureFlags> * _featureFlags;
    NSMutableDictionary * _highlightsByIdentifier;
    bool  _isIpad;
    NSMutableDictionary * _originatingParticipantByHighlightIdentifier;
    NSString * _pendingCollaborationToAdd;
    TUConversation * _pendingConversationToAdd;
    NSMutableSet * _pendingHighlightIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <TUCollaborationProvider> *collaborationProvider;
@property (nonatomic, readonly) NSMutableDictionary *collaborationStateByIdentifier;
@property (nonatomic, retain) NSMutableDictionary *conversationsByHighlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUCollaborationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TUFeatureFlags> *featureFlags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *highlightsByIdentifier;
@property (nonatomic, readonly) bool isIpad;
@property (nonatomic, retain) NSMutableDictionary *originatingParticipantByHighlightIdentifier;
@property (nonatomic, retain) NSString *pendingCollaborationToAdd;
@property (nonatomic, retain) TUConversation *pendingConversationToAdd;
@property (nonatomic, retain) NSMutableSet *pendingHighlightIdentifiers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)associateCollaborationWithNewConversation:(id)arg1;
- (id)collaborationForConversation:(id)arg1;
- (id)collaborationProvider;
- (id)collaborationStateByIdentifier;
- (long long)collaborationStateForConversation:(id)arg1;
- (void)collaborationsDidChange:(id)arg1;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)conversationsByHighlightIdentifier;
- (id)delegate;
- (id)featureFlags;
- (id)highlightsByIdentifier;
- (id)initWithCollaborationProvider:(id)arg1;
- (id)initWithCollaborationProvider:(id)arg1 featureFlags:(id)arg2 deviceSupport:(id)arg3;
- (bool)isCollaborationLocallyInitiatedForConversation:(id)arg1;
- (bool)isIpad;
- (void)notifyDelegateOfHighlightChanged:(id)arg1 onConversation:(id)arg2;
- (id)originatingParticipantByHighlightIdentifier;
- (void)participant:(id)arg1 addedHighlightToConversation:(id)arg2 highlightIdentifier:(id)arg3 oldHighlightIdentifier:(id)arg4 isFirstAdd:(bool)arg5;
- (void)participant:(id)arg1 reAddedHighlightToConversation:(id)arg2 highlightIdentifier:(id)arg3;
- (void)participant:(id)arg1 removedHighlightFromConversation:(id)arg2 highlightIdentifier:(id)arg3;
- (id)pendingCollaborationToAdd;
- (id)pendingConversationToAdd;
- (id)pendingHighlightIdentifiers;
- (id)queue;
- (void)queueCollaborationIdentifierForCollaboration:(id)arg1 toConversation:(id)arg2;
- (void)setCollaborationState:(long long)arg1 forCollaborationIdentifier:(id)arg2;
- (void)setConversationsByHighlightIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightsByIdentifier:(id)arg1;
- (void)setOriginatingParticipantByHighlightIdentifier:(id)arg1;
- (void)setPendingCollaborationToAdd:(id)arg1;
- (void)setPendingConversationToAdd:(id)arg1;
- (void)setPendingHighlightIdentifiers:(id)arg1;
- (void)startTrackingCollaborationIfNecessaryAndNotifyDelegate:(id)arg1 forConversation:(id)arg2;
- (void)stopTrackingHighlightForConversation:(id)arg1;
- (void)vendNoticeForCollaboration:(id)arg1 participant:(id)arg2 forConversation:(id)arg3 type:(long long)arg4;

@end

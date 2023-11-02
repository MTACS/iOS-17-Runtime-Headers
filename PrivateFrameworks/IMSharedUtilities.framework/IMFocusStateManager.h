
@interface IMFocusStateManager : NSObject <DNDStateUpdateListener> {
    NSHashTable * _delegates;
    DNDState * _dndState;
    DNDStateService * _dndStateService;
    bool  _focusFilterActionIsEnabled;
    bool  _registeredAsStateUpdateListener;
    bool  _userSwitchForFocusFilteringIsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DNDState *dndState;
@property (nonatomic, retain) DNDStateService *dndStateService;
@property (nonatomic) bool focusFilterActionIsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool registeredAsStateUpdateListener;
@property (nonatomic, readonly) bool shouldDisplayFocusFilterBanner;
@property (nonatomic, readonly) bool shouldFilterConversationsByFocus;
@property (nonatomic, readonly) bool shouldFilterUnreadMessageCount;
@property (readonly) Class superclass;
@property (nonatomic) bool userSwitchForFocusFilteringIsEnabled;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)_conversationWithHandles:(id)arg1 isAllowedInFocusWithExclusiveSenderConfiguration:(id)arg2;
+ (bool)_conversationWithHandles:(id)arg1 isAllowedInFocusWithInclusiveSenderConfiguration:(id)arg2;
+ (id)_dndContactHandleForAddress:(id)arg1;
+ (bool)_shouldDisplayConversationWithHandles:(id)arg1 withFocusConfiguration:(id)arg2;
+ (bool)focusConfiguration:(id)arg1 matchesConversationWithHandleStrings:(id)arg2;
+ (bool)focusConfiguration:(id)arg1 matchesConversationWithHandles:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_fetchInitialDNDStateSynchronously:(bool)arg1;
- (void)_notifyDelegatesOfDNDStateChange;
- (bool)activeFocusModeMatchesConversationWithHandleStrings:(id)arg1;
- (bool)activeFocusModeMatchesConversationWithHandles:(id)arg1;
- (id)activeFocusName;
- (id)activeFocusSymbolName;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)delegates;
- (bool)deviceSupportsFocusFiltering;
- (id)dndState;
- (id)dndStateService;
- (bool)focusFilterActionIsEnabled;
- (bool)hasActiveFocusMode;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)registeredAsStateUpdateListener;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setDndState:(id)arg1;
- (void)setDndStateService:(id)arg1;
- (void)setFocusFilterActionIsEnabled:(bool)arg1;
- (void)setRegisteredAsStateUpdateListener:(bool)arg1;
- (void)setUserSwitchForFocusFilteringIsEnabled:(bool)arg1;
- (bool)shouldDisplayFocusFilterBanner;
- (bool)shouldFilterConversationsByFocus;
- (bool)shouldFilterUnreadMessageCount;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (bool)userSwitchForFocusFilteringIsEnabled;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)chatMatchesActiveFocusMode:(id)arg1;
- (bool)conversationMatchesActiveFocusMode:(id)arg1;
- (bool)senderMatchesActiveFocusModeForMessage:(id)arg1;
- (void)updateFocusStateForCurrentFocusFilterAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)updateFocusStateForCurrentFocusFilterActionAsync;

@end

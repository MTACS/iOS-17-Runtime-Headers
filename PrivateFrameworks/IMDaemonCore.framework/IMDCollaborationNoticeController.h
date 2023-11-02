
@interface IMDCollaborationNoticeController : NSObject <IMDCollaborationNoticeDispatcherDelegate, SWHighlightCenterDelegate> {
    NSObject<OS_dispatch_queue> * _collaborationNoticeDispatcherQueue;
    bool  _hasPopulatedHighlightTracking;
    SWHighlightCenter * _highlightCenter;
    NSSet * _highlightURLs;
    NSDictionary * _highlightURLsForChatGUID;
    NSObject<OS_dispatch_queue> * _mappingChatsToHighlightsQueue;
    NSObject<OS_dispatch_queue> * _noticeDataQueue;
    IMDCollaborationNoticeDispatcher * _noticeDispatcher;
    IMDCollaborationNoticeStore * _noticeStore;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *collaborationNoticeDispatcherQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPopulatedHighlightTracking;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SWHighlightCenter *highlightCenter;
@property (nonatomic, retain) NSSet *highlightURLs;
@property (nonatomic, retain) NSDictionary *highlightURLsForChatGUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mappingChatsToHighlightsQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *noticeDataQueue;
@property (nonatomic, readonly) IMDCollaborationNoticeDispatcher *noticeDispatcher;
@property (nonatomic, retain) IMDCollaborationNoticeStore *noticeStore;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_chatGUIDsForNotice:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_chatGUIDsForNoticeURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_generateParticipantChangeNoticesForChat:(id)arg1 highlight:(id)arg2 participant:(id)arg3 noticeType:(long long)arg4 checkedPrivileges:(bool)arg5 messageGUID:(id)arg6;
- (void)_generateParticipantChangeNoticesForChat:(id)arg1 highlights:(id)arg2 participants:(id)arg3 noticeType:(long long)arg4;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (bool)_hasAdministrativePrivilegesForHighlight:(id)arg1 chatGUID:(id)arg2;
- (bool)_highlightEligibleForSuggestAddingUser:(id)arg1;
- (void)_isShareBearURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_mapChatGUIDsToHighlight:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processNotice:(id)arg1;
- (void)_shouldPostParticipantChangeNoticesForChat:(id)arg1 withParticipants:(id)arg2 forNoticeType:(long long)arg3;
- (void)_updateMappingHighlightsToChats;
- (void)broadcastNoticesDidChangeForChatGUIDs:(id)arg1;
- (id)collaborationNoticeDispatcherQueue;
- (void)dismissNotice:(id)arg1;
- (void)dispatcher:(id)arg1 didReceiveDismissalReflectionForNoticeGUIDs:(id)arg2;
- (void)dispatcher:(id)arg1 didReceiveDismissalRequest:(id)arg2 fromID:(id)arg3;
- (void)dispatcher:(id)arg1 didReceiveNotice:(id)arg2 fromID:(id)arg3;
- (bool)hasPopulatedHighlightTracking;
- (id)highlightCenter;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)highlightURLs;
- (id)highlightURLsForChatGUID;
- (id)init;
- (id)mappingChatsToHighlightsQueue;
- (id)noticeDataQueue;
- (id)noticeDispatcher;
- (id)noticeStore;
- (id)noticesForChatGUID:(id)arg1;
- (void)receiveHighlightEvent:(id)arg1 fromSender:(id)arg2 guidString:(id)arg3 date:(id)arg4;
- (void)setHasPopulatedHighlightTracking:(bool)arg1;
- (void)setHighlightURLs:(id)arg1;
- (void)setHighlightURLsForChatGUID:(id)arg1;
- (void)setNoticeStore:(id)arg1;
- (void)updateNotice:(id)arg1;

@end

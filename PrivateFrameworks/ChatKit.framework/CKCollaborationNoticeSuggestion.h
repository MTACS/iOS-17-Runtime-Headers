
@interface CKCollaborationNoticeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionList> {
    <CKCollaborationNoticeSuggestionDelegate> * _delegate;
    IMCollaborationNotice * _notice;
    CKEntity * _senderEntity;
    bool  _wantsInlineReplyStyle;
    <SGSuggestionDelegate> * suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKCollaborationNoticeSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMCollaborationNotice *notice;
@property (nonatomic, readonly) CKEntity *senderEntity;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsInlineReplyStyle;

+ (id)suggestionWithNotice:(id)arg1 delegate:(id)arg2 wantsInlineReplyStyle:(bool)arg3;

- (void).cxx_destruct;
- (long long)aggregateCollaborationNoticeTypeForItems:(id)arg1;
- (id)aggregateUTTypeForItems:(id)arg1 withAggregateNoticeType:(long long)arg2;
- (id)collaborationNoticeSuggestionsForItems:(id)arg1;
- (id)collaborationTitleForUTType:(id)arg1 numberOfFiles:(long long)arg2;
- (id)delegate;
- (id)initWithNotice:(id)arg1 wantsInlineReplyStyle:(bool)arg2;
- (id)notice;
- (id)senderEntity;
- (void)setDelegate:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (void)setWantsInlineReplyStyle:(bool)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionBackgroundVisualEffectView;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitleWithSenderName:(id)arg1 documentTitle:(id)arg2 noticeType:(long long)arg3;
- (id)suggestionCategoryTitleWithSenderName:(id)arg1 numberOfFiles:(long long)arg2 numberOfItems:(long long)arg3 aggregateContentType:(id)arg4 aggregateNoticeType:(long long)arg5;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionDivider;
- (id)suggestionHandlesForItems:(id)arg1;
- (id)suggestionImageSGView;
- (id)suggestionList;
- (bool)suggestionListSupportsDismissal;
- (id)suggestionListTitle;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)suggestionURLsForItems:(id)arg1;
- (bool)wantsInlineReplyStyle;

@end


@interface CKTranscriptPluginChatItem : CKMessagePartChatItem {
    NSString * _conversationID;
    IMTranscriptPluginChatItem * _imTranscriptPluginChatItem;
    bool  _isAppearing;
    bool  _isBusiness;
    bool  _isHandwriting;
    NSArray * _recipients;
    bool  _wantsOutline;
    bool  _wantsTranscriptGroupMonograms;
}

@property (nonatomic, readonly) IMTranscriptPluginChatItem *IMChatItem;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *conversationID;
@property (nonatomic, retain) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (nonatomic) bool isAppearing;
@property (nonatomic) bool isBusiness;
@property (nonatomic, readonly) bool isHandwriting;
@property (nonatomic, readonly) bool isPlayed;
@property (nonatomic, readonly) bool isSaved;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, readonly) bool wantsBalloonGradient;
@property (nonatomic, readonly) bool wantsOutline;
@property (nonatomic, readonly) bool wantsTranscriptGroupMonograms;

+ (double)resultingMaxWidthWithBalloonMaxWidth:(double)arg1 fullMaxWidth:(double)arg2 transcriptTraitCollection:(id)arg3;
+ (id)wolfHiddenSWYUIClientBundleIDs;

- (void).cxx_destruct;
- (void)_cacheConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(bool)arg3;
- (void)_configureBalloonController:(id)arg1 conversationID:(id)arg2 recipients:(id)arg3 isBusiness:(bool)arg4;
- (id)balloonControllerForContext:(id)arg1;
- (Class)balloonViewClass;
- (id)bundleIdentifier;
- (bool)canCopy;
- (bool)canForward;
- (bool)canInlineReply;
- (bool)canPerformQuickAction;
- (Class)cellClass;
- (id)cellIdentifier;
- (id)compositionWithContext:(id)arg1;
- (void)configureWithConversationID:(id)arg1 recipients:(id)arg2 isBusiness:(bool)arg3 context:(id)arg4;
- (id)contact;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentViewControllerForContext:(id)arg1;
- (id)conversationID;
- (id)dragItemProvider;
- (id)extensibleViewControllerForContext:(id)arg1;
- (id)extensibleViewForContext:(id)arg1;
- (id)imTranscriptPluginChatItem;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isAppearing;
- (bool)isBusiness;
- (bool)isHandwriting;
- (bool)isPlayed;
- (bool)isSaved;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)menuTitle;
- (id)message;
- (void)performHostAppResumeWithContext:(id)arg1;
- (id)pluginDisplayContainerForContext:(id)arg1;
- (id)recipients;
- (void)releaseBalloonControllerIfNeededForContext:(id)arg1;
- (void)relinquishBalloonControllerForContext:(id)arg1;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)sender;
- (void)setConversationID:(id)arg1;
- (void)setImTranscriptPluginChatItem:(id)arg1;
- (void)setIsAppearing:(bool)arg1;
- (void)setIsBusiness:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (bool)shouldAllowExtraTallHeightForBundleID:(id)arg1;
- (bool)shouldSnapshot;
- (id)snapshotGUIDForPluginPayload:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;
- (BOOL)transcriptOrientation;
- (bool)wantsBalloonGradient;
- (bool)wantsOutline;
- (bool)wantsTranscriptGroupMonograms;

@end

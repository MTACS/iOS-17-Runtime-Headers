
@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController {
    bool  _animatingIn;
    bool  _animatingOut;
    NSDictionary * _currentBalloonOffsetMap;
    NSDictionary * _currentFrameMapForNextReload;
    NSDictionary * _targetFrameMapForAnimateOut;
    CKInlineReplyTransitionProperties * _transitionProperties;
}

@property (getter=isAnimatingIn, nonatomic) bool animatingIn;
@property (getter=isAnimatingOut, nonatomic) bool animatingOut;
@property (nonatomic, retain) NSDictionary *currentBalloonOffsetMap;
@property (nonatomic, retain) NSDictionary *currentFrameMapForNextReload;
@property (nonatomic, retain) NSDictionary *targetFrameMapForAnimateOut;
@property (nonatomic, retain) CKInlineReplyTransitionProperties *transitionProperties;

+ (id)chatItemsDidChangeNotification;

- (void).cxx_destruct;
- (bool)_canUseOpaqueMask;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)arg1;
- (id)balloonOffsetMapForLayout:(id)arg1 resetsOffsetMapAfterUse:(bool)arg2;
- (void)configureCell:(id)arg1 forCKChatItem:(id)arg2 atIndexPath:(id)arg3;
- (id)currentBalloonOffsetMap;
- (id)currentFrameMapForNextReload;
- (void)didMoveToParentViewController:(id)arg1;
- (void)fetchEarlierMessagesForConversation:(id /* block */)arg1;
- (void)fetchRecentMessagesForConversation:(id /* block */)arg1;
- (id)imChatItems;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 collectionViewSize:(struct CGSize { double x1; double x2; })arg6;
- (bool)isAnimatingIn;
- (bool)isAnimatingOut;
- (bool)isInline;
- (bool)isModal;
- (void)loadEarlierMessagesForConversation;
- (void)loadRecentMessagesForConversation;
- (id)overrideCurrentFrameMapForLayout:(id)arg1;
- (id)overrideTargetFrameMapForLayout:(id)arg1;
- (void)performCollectionViewReloadForAnimateOut;
- (void)setAnimatingIn:(bool)arg1;
- (void)setAnimatingOut:(bool)arg1;
- (void)setCollectionViewCurrentFramesForNextLayout:(id)arg1;
- (void)setCollectionViewTargetFrames:(id)arg1;
- (void)setCurrentBalloonOffsetMap:(id)arg1;
- (void)setCurrentFrameMapForNextReload:(id)arg1;
- (void)setScrollAnchor:(double)arg1;
- (void)setTargetFrameMapForAnimateOut:(id)arg1;
- (void)setTransitionProperties:(id)arg1;
- (bool)shouldEndShowingEditHistoryOnViewDisappearance;
- (id)targetFrameMapForAnimateOut;
- (id)transcriptBackgroundColor;
- (id)transitionProperties;

@end

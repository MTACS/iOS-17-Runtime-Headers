
@interface CKAggregateAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSArray * _aggregateChatItems;
    NSArray * _aggregatedNonTapbackVisibleAssociatedMessageChatItems;
    NSArray * _aggregatedVisibleAssociatedMessageChatItems;
    CKMediaObjectAssetDataSource * _dataSource;
    bool  _hasCheckedForMomentShareURL;
    NSArray * _mediaObjects;
    NSURL * _momentShareURL;
    UITraitCollection * _transcriptTraitCollection;
}

@property (nonatomic, retain) NSArray *aggregateChatItems;
@property (nonatomic, retain) NSArray *aggregatedNonTapbackVisibleAssociatedMessageChatItems;
@property (nonatomic, retain) NSArray *aggregatedVisibleAssociatedMessageChatItems;
@property (nonatomic, retain) CKMediaObjectAssetDataSource *dataSource;
@property (nonatomic, retain) NSArray *mediaObjects;
@property (nonatomic, copy) NSURL *momentShareURL;
@property (nonatomic, readonly, copy) NSArray *transferGUIDs;
@property (nonatomic, readonly) NSArray *visibleAssociatedMessageChatItemsIncludingTapbacks;

- (void).cxx_destruct;
- (void)_generateMediaObjects;
- (id)aggregateChatItems;
- (id)aggregatedNonTapbackVisibleAssociatedMessageChatItems;
- (id)aggregatedVisibleAssociatedMessageChatItems;
- (Class)balloonViewClass;
- (bool)canCopy;
- (bool)canDelete;
- (bool)canExport;
- (bool)canForward;
- (bool)canPerformQuickAction;
- (Class)cellClass;
- (id)dataSource;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObjects;
- (id)momentShareURL;
- (id)pasteboardItemProviders;
- (void)setAggregateChatItems:(id)arg1;
- (void)setAggregatedNonTapbackVisibleAssociatedMessageChatItems:(id)arg1;
- (void)setAggregatedVisibleAssociatedMessageChatItems:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setMomentShareURL:(id)arg1;
- (void)setTranscriptTraitCollection:(id)arg1;
- (bool)shouldCacheSize;
- (id)transcriptTraitCollection;
- (id)transferGUIDs;
- (id)visibleAssociatedMessageChatItems;
- (id)visibleAssociatedMessageChatItemsIncludingTapbacks;

@end

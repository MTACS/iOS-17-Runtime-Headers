
@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem {
    CKMediaObject * _mediaObject;
    IMSticker * _sticker;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSDictionary *attributionInfo;
@property (nonatomic, readonly) bool canShowInAppStore;
@property (nonatomic, readonly) bool isCustomSticker;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isDraggable;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, copy) IMSticker *sticker;
@property (nonatomic, readonly) NSString *stickerPackGUID;
@property (nonatomic, readonly) NSString *stickerPackName;
@property (nonatomic, readonly) NSDictionary *stickerUserInfo;
@property (nonatomic, readonly, copy) NSString *transferGUID;

+ (id)_droppedStickers;
+ (id)_showingStickers;
+ (void)addDroppedSticker:(id)arg1;
+ (void)clearTranscriptDisplayCaches;
+ (double)computeHorizonatalStickerFrameOffset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 parentSize:(struct CGSize { double x1; double x2; })arg2 forPositioningWithinContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })arg4 forTranscriptOrientation:(BOOL)arg5;
+ (bool)isDroppedSticker:(id)arg1;
+ (void)removeDroppedSticker:(id)arg1;
+ (void)setUserHasDraggedSticker:(bool)arg1;
+ (id)stickerMoveAnimationFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)stickerScaleDuringMoveAnimation;
+ (bool)userHasDraggedSticker;

- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (id)adamID;
- (id)attributionImage;
- (id)attributionImageTintColor;
- (id)attributionInfo;
- (bool)canShowInAppStore;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)insertionHandler;
- (bool)isCustomSticker;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isSticker;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObject;
- (id)messageSummaryInfoValueForKey:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setSticker:(id)arg1;
- (id)sticker;
- (id)stickerPackGUID;
- (id)stickerPackName;
- (id)stickerUserInfo;
- (BOOL)transcriptOrientation;
- (id)transferGUID;

@end

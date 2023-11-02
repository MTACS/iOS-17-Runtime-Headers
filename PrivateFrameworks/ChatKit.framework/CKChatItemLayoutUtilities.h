
@interface CKChatItemLayoutUtilities : NSObject

+ (double)adjustedBalloonTopSpacingWithSpacing:(double)arg1 previousChatItem:(id)arg2;
+ (double)adjustedTopSpacingForTextAlignmentInsetsWithSpacing:(double)arg1 chatItem:(id)arg2 previousChatItem:(id)arg3;
+ (id)avatarSupplementaryItemForChatItem:(id)arg1 layoutEnvironment:(id)arg2;
+ (id)balloonEdgeSpacingForItemWithLayoutEnvironment:(id)arg1 orientation:(BOOL)arg2 itemSize:(struct CGSize { double x1; double x2; })arg3 supplementaryItems:(id)arg4;
+ (id)dynamicWidthLayoutSizeWithHeight:(double)arg1;
+ (id)layoutGroupForItem:(id)arg1;
+ (id)layoutSizeWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)needsAdditionalBracketPaddingForChatItem:(id)arg1 prevChatItem:(id)arg2;
+ (bool)nextItemIsOriginatorWithRepliesForIndex:(unsigned long long)arg1 allDatasourceItems:(id)arg2;
+ (bool)nextMessageIsReplyForIndex:(unsigned long long)arg1 allDatasourceItems:(id)arg2;
+ (bool)prevMessageIsReplyForIndex:(unsigned long long)arg1 allDatasourceItems:(id)arg2;
+ (struct CGSize { double x1; double x2; })sizeWithLayoutSize:(id)arg1;
+ (id)tapbackLayoutAnchorForAcknowledgmentChatItem:(id)arg1;
+ (id)tapbackSupplementaryItemForChatItem:(id)arg1 layoutEnvironment:(id)arg2;
+ (id)transcriptBalloonVerticalLayoutSpacingWithTopSpacing:(double)arg1 bottomSpacing:(double)arg2 previousChatItem:(id)arg3;
+ (id)transcriptVerticalEdgeSpacingForChatItem:(id)arg1 previousChatItem:(id)arg2 topSpacing:(double)arg3 bottomSpacing:(double)arg4;

@end

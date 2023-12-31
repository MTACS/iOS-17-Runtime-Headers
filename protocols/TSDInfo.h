
@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>

@required

- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
- (TSDInfoGeometry *)geometry;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isThemeContent;
- (Class)layoutClass;
- (TSPObject<TSDOwningAttachment> *)owningAttachment;
- (TSPObject<TSDOwningAttachment> *)owningAttachmentNoRecurse;
- (NSObject<TSDContainerInfo> *)parentInfo;
- (Class)repClass;
- (void)setGeometry:(TSDInfoGeometry *)arg1;
- (void)setOwningAttachment:(TSPObject<TSDOwningAttachment> *)arg1;
- (void)setParentInfo:(NSObject<TSDContainerInfo> *)arg1;

@end

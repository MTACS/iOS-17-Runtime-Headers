
@interface CKMediaObjectAssetActionPerformer : PXAssetActionPerformer {
    <CKMediaObjectAssetActionHelper> * _chatActionHelper;
    CKMessagePartChatItem * _chatItem;
}

@property (nonatomic) <CKMediaObjectAssetActionHelper> *chatActionHelper;
@property (nonatomic, retain) CKMessagePartChatItem *chatItem;

+ (bool)canPerformOnImplicitSelection;
+ (bool)canPerformWithActionManager:(id)arg1;
+ (bool)canPerformWithActionManager:(id)arg1 selectionSnapshot:(id)arg2;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;
+ (id)createPreviewActionWithActionManager:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)chatActionHelper;
- (id)chatItem;
- (void)setChatActionHelper:(id)arg1;
- (void)setChatItem:(id)arg1;

@end

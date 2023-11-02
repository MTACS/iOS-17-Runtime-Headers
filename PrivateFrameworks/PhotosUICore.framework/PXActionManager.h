
@interface PXActionManager : NSObject {
    NSSet * _allowedActionTypes;
    <PXActionPerformerDelegate> * _performerDelegate;
}

@property (nonatomic, copy) NSSet *allowedActionTypes;
@property (nonatomic) <PXActionPerformerDelegate> *performerDelegate;

+ (id /* block */)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)actionKeyCommands;
- (id)actionPerformerForActionType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)allowedActionTypes;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformActionType:(id)arg1;
- (id)contextMenu;
- (bool)isActionTypeAllowed:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)menuElementForActionType:(id)arg1 image:(id)arg2 willStartActionHandler:(id /* block */)arg3 didEndActionHandler:(id /* block */)arg4;
- (id)performerDelegate;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (void)setAllowedActionTypes:(id)arg1;
- (void)setPerformerDelegate:(id)arg1;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (bool)supportsContextMenu;
- (id)systemImageNameForActionType:(id)arg1;

@end

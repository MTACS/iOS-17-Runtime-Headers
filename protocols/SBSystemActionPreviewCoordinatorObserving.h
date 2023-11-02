
@protocol SBSystemActionPreviewCoordinatorObserving <NSObject>

@required

- (void)systemActionPreviewCoordinator:(SBSystemActionPreviewCoordinator *)arg1 didBeginPreview:(id <SBSystemActionPreviewInvalidatable>)arg2 forAction:(SBSystemAction *)arg3;
- (void)systemActionPreviewCoordinator:(SBSystemActionPreviewCoordinator *)arg1 didEndPreview:(id <SBSystemActionPreviewInvalidatable>)arg2 forAction:(SBSystemAction *)arg3 withResult:(unsigned long long)arg4;
- (void)systemActionPreviewCoordinator:(SBSystemActionPreviewCoordinator *)arg1 didInvalidateExpansionOfPreview:(id <SBSystemActionPreviewInvalidatable>)arg2 forAction:(SBSystemAction *)arg3 withResult:(unsigned long long)arg4;

@end

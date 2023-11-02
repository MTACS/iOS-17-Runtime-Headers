
@protocol SBSystemActionPreviewProviding <NSObject>

@required

- (<SBSystemActionPreviewInvalidatable> *)showPreviewForAction:(SBSystemAction *)arg1 withContext:(id <SBSystemActionPreviewContextProviding>)arg2;
- (SBUISound *)soundForPerformingActionWithIdentifier:(NSString *)arg1;
- (NSString *)systemImageNameForDefaultPreviewForActionWithIdentifier:(NSString *)arg1;
- (bool)wantsPreviewForActionWithIdentifier:(NSString *)arg1;

@end

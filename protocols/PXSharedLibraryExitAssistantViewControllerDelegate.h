
@protocol PXSharedLibraryExitAssistantViewControllerDelegate <NSObject>

@required

- (void)cancelExitAssistantViewController:(PXSharedLibraryExitAssistantViewController *)arg1;
- (void)completeExitAssistantViewController:(PXSharedLibraryExitAssistantViewController *)arg1 withExitRetentionPolicy:(long long)arg2;

@end

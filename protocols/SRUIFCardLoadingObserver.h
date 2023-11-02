
@protocol SRUIFCardLoadingObserver <NSObject>

@optional

- (void)cardLoadingMonitor:(SRUIFCardLoadingMonitor *)arg1 didReceiveCardSnippet:(SACardSnippet *)arg2;
- (void)cardLoadingMonitor:(SRUIFCardLoadingMonitor *)arg1 didReceiveVisualResponseSnippet:(SAUIVisualResponseSnippet *)arg2;

@end


@protocol _WKAutomationDelegate <NSObject>

@optional

- (void)_processPool:(WKProcessPool *)arg1 didRequestAutomationSessionWithIdentifier:(NSString *)arg2 configuration:(_WKAutomationSessionConfiguration *)arg3;
- (bool)_processPoolAllowsRemoteAutomation:(WKProcessPool *)arg1;
- (NSString *)_processPoolBrowserNameForAutomation:(WKProcessPool *)arg1;
- (NSString *)_processPoolBrowserVersionForAutomation:(WKProcessPool *)arg1;
- (void)_processPoolDidRequestInspectorDebuggablesToWakeUp:(WKProcessPool *)arg1;

@end

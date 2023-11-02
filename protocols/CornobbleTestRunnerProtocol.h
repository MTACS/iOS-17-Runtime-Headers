
@protocol CornobbleTestRunnerProtocol <NSObject>

@required

+ (void)performFingerOnGlassScrollWithParameters:(id <CRNScrollTestParameters>)arg1;
+ (void)performStandardScrollingTestNamed:(NSString *)arg1 onScrollView:(UIScrollView *)arg2;
+ (void)performStandardScrollingTestNamed:(NSString *)arg1 onScrollView:(UIScrollView *)arg2 iterations:(unsigned long long)arg3;
+ (void)performStandardScrollingTestNamed:(NSString *)arg1 onScrollView:(UIScrollView *)arg2 iterations:(unsigned long long)arg3 canFlick:(bool)arg4;
+ (void)performStandardScrollingTestNamed:(void *)arg1 onScrollView:(void *)arg2 iterations:(void *)arg3 canFlick:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: NSString *, UIScrollView *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
+ (void)performTestNamed:(void *)arg1 usingComposer:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPEventStreamComposer> *, void*
+ (void)performTestNamed:(void *)arg1 usingComposer:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 12: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RCPEventStreamComposer> *, void*, id /* block */, void*, void, id /* block */, void*
+ (void)performTestNamed:(NSString *)arg1 withEventStream:(RCPEventStream *)arg2;
+ (void)performTestNamed:(void *)arg1 withEventStream:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSString *, RCPEventStream *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
+ (void)performTestNamed:(NSString *)arg1 withRecapCommandString:(NSString *)arg2 onView:(UIView *)arg3;
+ (void)performTestNamed:(void *)arg1 withRecapCommandString:(void *)arg2 onView:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
+ (void)performTestNamed:(NSString *)arg1 withRecapFile:(NSURL *)arg2 onView:(UIView *)arg3;
+ (void)performTestNamed:(void *)arg1 withRecapFile:(void *)arg2 onView:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSURL *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

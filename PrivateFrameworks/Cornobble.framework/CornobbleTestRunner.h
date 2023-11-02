
@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isCornobbleAvailable;
+ (void)performFingerOnGlassScrollTestNamed:(id)arg1 withParameters:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)performFingerOnGlassScrollWithParameters:(id)arg1;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(bool)arg4;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(bool)arg4 completionHandler:(id /* block */)arg5;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 canFlick:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 direction:(long long)arg5 canFlick:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (void)performTestNamed:(id)arg1 usingComposer:(id /* block */)arg2;
+ (void)performTestNamed:(id)arg1 usingComposer:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)performTestNamed:(id)arg1 withEventStream:(id)arg2;
+ (void)performTestNamed:(id)arg1 withEventStream:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3;
+ (void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3;
+ (void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)playInteraction:(id)arg1 completionHandler:(id /* block */)arg2;

@end


@interface SAInternalAPI : NSObject

+ (void)addAppSizerHandler:(id /* block */)arg1 reply:(id /* block */)arg2;
+ (void)computeSizeOfVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)disableAppSizerResultsFilteringWithReply:(id /* block */)arg1;
+ (void)getAppPaths:(id)arg1 options:(int)arg2 reply:(id /* block */)arg3;
+ (void)getAppPathsWithReplyBlock:(id /* block */)arg1;
+ (void)getLastTelemetryData:(id /* block */)arg1;
+ (void)getPurgeableInfo:(id)arg1 options:(unsigned long long)arg2 reply:(id /* block */)arg3;
+ (void)runAppSizerWithReplyBlock:(id /* block */)arg1;
+ (void)setAppSizerFilteringOptionsToDefaultWithReply:(id /* block */)arg1;
+ (void)setAppSizerMaxRerunTimeout:(unsigned int)arg1 reply:(id /* block */)arg2;
+ (void)setEnableTTR:(bool)arg1 reply:(id /* block */)arg2;
+ (void)setForceTTR:(bool)arg1 reply:(id /* block */)arg2;

@end

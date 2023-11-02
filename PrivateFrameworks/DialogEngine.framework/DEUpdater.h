
@interface DEUpdater : NSObject

+ (bool)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5;
+ (bool)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5 dirDownloadType:(unsigned long long)arg6;
+ (id)summarize:(id)arg1 filter:(id)arg2;

@end

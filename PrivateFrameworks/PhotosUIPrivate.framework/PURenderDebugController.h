
@interface PURenderDebugController : NSObject

+ (id)debugFilesDirectory;
+ (void)deleteDebugDirectory;
+ (id)getDebugFiles;
+ (id)listDebugFilesViewController;
+ (void)setCoreImageDebugMode:(bool)arg1 dumpInputs:(bool)arg2 dumpOutputs:(bool)arg3 dumpIntermediates:(bool)arg4 dumpTiming:(bool)arg5;
+ (id)shareSheetViewController;

@end


@interface TTKTestCaseWriter : NSObject

+ (id)storeToDir:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3 writeOnFlush:(bool)arg4 maxTestCasesPerFile:(unsigned int)arg5 maxFilesPerDirectory:(unsigned int)arg6;
+ (id)storeToFile:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3;

@end

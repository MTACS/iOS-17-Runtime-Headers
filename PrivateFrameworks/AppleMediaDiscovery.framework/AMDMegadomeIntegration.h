
@interface AMDMegadomeIntegration : NSObject

+ (id)handleJSRequest:(id)arg1 error:(id*)arg2;
+ (id)run:(id)arg1 usingView:(id)arg2 andDb:(id)arg3 returnColumnMajor:(bool)arg4 returnRowMajor:(bool)arg5 withError:(id*)arg6;
+ (id)save:(id)arg1 into:(id)arg2 inDb:(id)arg3 withError:(id*)arg4;

@end

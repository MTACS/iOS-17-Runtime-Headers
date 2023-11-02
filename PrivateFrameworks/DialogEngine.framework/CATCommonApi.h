
@interface CATCommonApi : NSObject

+ (void)ConfigureDEExecutor:(id)arg1 parameters:(id)arg2 globalParameters:(id)arg3 catId:(id)arg4 callback:(id)arg5 options:(int)arg6;
+ (id)CreateDEExecutor:(id)arg1 templateDir:(id)arg2 catId:(id)arg3 paramsXML:(id)arg4 localeXML:(id)arg5 parameters:(id)arg6 globalContext:(id)arg7 callback:(id)arg8 options:(int)arg9;
+ (id)DEResultToCATResult:(id)arg1 catId:(id)arg2;
+ (id)DEResultToDialogExecutionResult:(id)arg1 catId:(id)arg2;
+ (id)NSErrorFromString:(id)arg1 errorCode:(id)arg2;
+ (bool)UpdatesEnabled:(int)arg1;

@end

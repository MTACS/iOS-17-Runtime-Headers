
@interface CATDialog : NSObject

+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 completion:(id /* block */)arg6;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id /* block */)arg7;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 completion:(id /* block */)arg5;
+ (void)execute:(id)arg1 paramsXML:(id)arg2 localeXML:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(id /* block */)arg8;
+ (id)execute:(id)arg1 templateDir:(id)arg2 catId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7;
+ (void)execute:(id)arg1 templateDir:(id)arg2 catId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(id /* block */)arg8;
+ (void)preload;

@end

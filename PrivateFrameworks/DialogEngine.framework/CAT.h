
@interface CAT : NSObject

+ (bool)downloadMorphunDataByLocale:(id)arg1;
+ (bool)downloadMorphunDataByLocales:(id)arg1;
+ (id)evaluate:(id)arg1 propName:(id)arg2 parameters:(id)arg3 globals:(id)arg4;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 completion:(id /* block */)arg6;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id /* block */)arg7;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 completion:(id /* block */)arg5;
+ (void)execute:(id)arg1 paramsXML:(id)arg2 localeXML:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(id /* block */)arg8;
+ (id)execute:(id)arg1 templateDir:(id)arg2 catId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7;
+ (void)execute:(id)arg1 templateDir:(id)arg2 catId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(id /* block */)arg8;
+ (id)getBuiltinDialogMetadataCategoryNamesForLocale:(id)arg1;
+ (id)getBuiltinDialogMetadataForLocale:(id)arg1;
+ (id)getDialogAssetsVersion:(id)arg1;
+ (id)getDialogAssetsVersion:(id)arg1 enableUpdates:(bool)arg2;
+ (id)getDialogMetadataCategoryNamesForLocale:(id)arg1 locale:(id)arg2;
+ (id)getDialogMetadataForLocale:(id)arg1 locale:(id)arg2;
+ (id)getDialogStateFamily:(id)arg1;
+ (id)getDialogStateUseCase:(id)arg1;
+ (id)getFallbackLocales:(id)arg1;
+ (id)getFallbackLocales:(id)arg1 includingNonSiriLocales:(bool)arg2;
+ (id)getMorphunPath:(id)arg1;
+ (id)getMorphunPaths;
+ (void)preload;
+ (id)resolve:(id)arg1 propName:(id)arg2 parameters:(id)arg3 completion:(id /* block */)arg4;
+ (bool)runTests:(id)arg1;
+ (bool)runTests:(id)arg1 forLocale:(id)arg2;

@end


@interface CSBenchmarkService : NSObject

+ (void)benchmarkOnDeviceCompilationCleanup:(id /* block */)arg1;
+ (id)createBenchamrkXPCConnection;
+ (void)pingpong:(id)arg1 completion:(id /* block */)arg2;
+ (void)runAudioInjectionOnly:(id)arg1 completion:(id /* block */)arg2;
+ (void)runLstmPhsModelWithConfig:(id)arg1 withUrl:(id)arg2 withConfigRoot:(id)arg3 completion:(id /* block */)arg4;
+ (void)runNovDetectorWithConfig:(id)arg1 configRoot:(id)arg2 withUrl:(id)arg3 completion:(id /* block */)arg4;
+ (void)runODLDModelWithConfig:(id)arg1 locale:(id)arg2 inputText:(id)arg3 completion:(id /* block */)arg4;
+ (void)runOSDAnalyzerWithConfig:(id)arg1 withUrl:(id)arg2 completion:(id /* block */)arg3;
+ (void)runVTSecondPassModelWithConfig:(id)arg1 locale:(id)arg2 withUrl:(id)arg3 completion:(id /* block */)arg4;

@end

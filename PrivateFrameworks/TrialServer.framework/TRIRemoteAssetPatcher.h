
@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching> {
    NSObject<OS_xpc_object> * _monitoredActivity;
}

- (void).cxx_destruct;
- (id)_tokenForSandboxExtensionWithClass:(const char *)arg1 path:(id)arg2;
- (struct { unsigned char x1; })applyPatchWithFilename:(id)arg1 toSrcDir:(id)arg2 writingToEmptyDestDir:(id)arg3 postPatchCompression:(struct { unsigned long long x1; })arg4 error:(id*)arg5;
- (id)init;
- (id)initWithMonitoredActivity:(id)arg1;

@end

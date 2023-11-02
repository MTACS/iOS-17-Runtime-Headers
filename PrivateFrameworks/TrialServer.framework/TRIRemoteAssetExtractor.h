
@interface TRIRemoteAssetExtractor : NSObject <TRIAssetExtracting> {
    NSObject<OS_xpc_object> * _monitoredActivity;
}

- (void).cxx_destruct;
- (struct { unsigned char x1; })extractArchiveFromFile:(id)arg1 withArchiveName:(id)arg2 toEmptyDirectory:(id)arg3 postExtractionCompression:(struct { unsigned long long x1; })arg4 error:(id*)arg5;
- (id)init;
- (id)initWithMonitoredActivity:(id)arg1;

@end

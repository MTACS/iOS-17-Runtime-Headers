
@protocol TRIAssetExtracting

@required

- (struct { unsigned char x1; })extractArchiveFromFile:(NSString *)arg1 withArchiveName:(NSString *)arg2 toEmptyDirectory:(NSString *)arg3 postExtractionCompression:(struct { unsigned long long x1; })arg4 error:(id*)arg5;

@end

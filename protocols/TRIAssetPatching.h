
@protocol TRIAssetPatching

@required

- (struct { unsigned char x1; })applyPatchWithFilename:(NSString *)arg1 toSrcDir:(NSString *)arg2 writingToEmptyDestDir:(NSString *)arg3 postPatchCompression:(struct { unsigned long long x1; })arg4 error:(id*)arg5;

@end

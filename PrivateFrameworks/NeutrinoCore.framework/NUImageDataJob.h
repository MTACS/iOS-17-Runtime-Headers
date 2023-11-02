
@interface NUImageDataJob : NURenderJob {
    NSDictionary * _data;
}

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cleanUp;
- (id)extractDataToDictionary:(id)arg1 bounds:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(struct CGColorSpace { }*)arg5 error:(id*)arg6;
- (bool)render:(out id*)arg1;
- (id)requestOptions;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end

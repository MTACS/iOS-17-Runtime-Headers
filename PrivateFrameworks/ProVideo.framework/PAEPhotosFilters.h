
@interface PAEPhotosFilters : PAEFilterDefaultBase {
    NSURL * LUTCcubeURL;
    NSURL * LUTCubeURL;
    NSURL * LUTScubeURL;
    NSMutableDictionary * LUTcache;
    struct PCMutex { 
        int (**_vptr$PCMutex)(); 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _Mutex; 
    }  cacheMutex;
    NSData * cool16BitLUT;
    int  whichFilter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)LUTFromCache:(int)arg1 atPath:(id)arg2;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)dealloc;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (id)initWithAPIManager:(id)arg1;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })lutBitmapForFilter:(int)arg1 lutDimensions:(int*)arg2;
- (id)lutFromCcubeFile:(id)arg1;
- (id)lutFromCubeFile:(id)arg1;
- (id)lutFromScubeFile:(id)arg1;
- (id)properties;
- (bool)read:(id)arg1 red:(float*)arg2 green:(float*)arg3 blue:(float*)arg4;
- (id)readCubeData:(id)arg1 error:(id*)arg2;
- (bool)readCubeLine:(id)arg1 intoLUTEntries:(void*)arg2;
- (bool)variesOverTime;

@end

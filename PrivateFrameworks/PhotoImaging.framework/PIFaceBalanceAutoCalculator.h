
@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased> {
    long long  _rawState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long rawState;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (void)calculateRAWWithRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)calculateWithRequest:(id)arg1 completion:(id /* block */)arg2;
+ (struct { double x1; double x2; double x3; })faceBalanceFromFaceImage:(id)arg1 forFaceRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
+ (id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id*)arg3;
+ (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })faceRectFromNormalizedFaceRet:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forImageExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 scaleX:(double)arg3 scaleY:(double)arg4;

- (id)initWithRequest:(id)arg1 isRAW:(bool)arg2;
- (long long)rawState;
- (void)submit:(id /* block */)arg1;

@end

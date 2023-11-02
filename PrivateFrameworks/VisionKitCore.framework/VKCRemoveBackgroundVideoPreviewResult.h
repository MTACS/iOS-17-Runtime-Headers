
@interface VKCRemoveBackgroundVideoPreviewResult : NSObject {
    NSError * _error;
    <_MADVideoRemoveBackgroundPreviewResult> * _madResult;
    bool  _successful;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) bool successful;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void).cxx_destruct;
- (id)error;
- (id)initWithMADVideoPreviewResult:(id)arg1 error:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (void)setError:(id)arg1;
- (void)setSuccessful:(bool)arg1;
- (id)subjectMatteAtCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)subjectMatteForImage:(id)arg1 atCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)successful;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end


@interface _NUVisionDetectionResult : _NURenderResult <NUVisionDetectionResult> {
    struct { 
        long long width; 
        long long height; 
    }  imageSize;
    NSArray * observations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { long long x1; long long x2; } imageSize;
@property (nonatomic, copy) NSArray *observations;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (struct { long long x1; long long x2; })imageSize;
- (id)observations;
- (void)setImageSize:(struct { long long x1; long long x2; })arg1;
- (void)setObservations:(id)arg1;

@end

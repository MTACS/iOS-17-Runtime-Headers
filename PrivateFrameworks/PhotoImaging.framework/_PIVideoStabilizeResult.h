
@interface _PIVideoStabilizeResult : _NURenderResult <PIVideoStabilizeResult> {
    unsigned long long  _analysisType;
    NSArray * _keyframes;
    NSDictionary * _rawHomographies;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _stabCropRect;
}

@property (nonatomic, readonly) unsigned long long analysisType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *keyframes;
@property (nonatomic, readonly) NSDictionary *rawHomographies;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)analysisType;
- (id)initWithKeyframes:(id)arg1 stabCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 analysisType:(unsigned long long)arg3 rawHomographies:(id)arg4;
- (id)keyframes;
- (id)rawHomographies;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;

@end

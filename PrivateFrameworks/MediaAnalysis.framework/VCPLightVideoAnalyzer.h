
@interface VCPLightVideoAnalyzer : NSObject {
    AVAsset * _avAsset;
    NSArray * _metaTracks;
    float  _photoOffset;
    NSMutableDictionary * _privateMutableResults;
    NSMutableDictionary * _publicMutableResults;
    unsigned long long  _requestedAnalyses;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) float photoOffset;
@property (nonatomic, readonly) NSDictionary *privateResults;
@property (nonatomic, readonly) NSDictionary *publicResults;

- (void).cxx_destruct;
- (int)analyzeAsset:(id /* block */)arg1 flags:(unsigned long long*)arg2;
- (int)checkTimeRangeConsistency;
- (id)findMetaTrackforType:(id)arg1;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (float)photoOffset;
- (int)postProcessOrientationResults;
- (id)privateResults;
- (int)processMetaTrackForType:(id)arg1 cancel:(id /* block */)arg2 flags:(unsigned long long*)arg3;
- (id)publicResults;
- (void)setPhotoOffset:(float)arg1;

@end

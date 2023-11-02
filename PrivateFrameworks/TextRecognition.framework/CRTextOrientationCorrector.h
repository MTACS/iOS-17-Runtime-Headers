
@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting, CRTextSequenceScriptCorrecting> {
    CRTextOrientationRecognizerConfiguration * _configuration;
    CRCTCCVNLPOrientationDecoder * _decoder;
    CRTextOrientationModelV1 * _model;
}

@property (retain) CRTextOrientationRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CRTextOrientationModelV1 *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_angleDirectionOfBaselineAngle:(double)arg1;
- (void)_correctScriptOnRegions:(id)arg1 indexes:(id)arg2 image:(id)arg3 rectifier:(id)arg4 error:(id*)arg5;
- (id)_indexSetFromIndices:(id)arg1;
- (id)_lineRegion:(id)arg1 applyingAngleDirection:(long long)arg2;
- (bool)_loadResourcesWithError:(id*)arg1;
- (id)_localeSortedRegions:(id)arg1 indexSet:(id)arg2;
- (long long)_orientationForBaselineAngle:(double)arg1;
- (long long)_orientationForBaselineAngle:(double)arg1 layoutDirection:(unsigned long long)arg2;
- (void)_scriptCorrectionBasedOnLayoutDirectionOnLineRegions:(id)arg1;
- (long long)calculateAngleDirectionForInput:(id)arg1 error:(id*)arg2;
- (long long)calculateAngleDirectionForTextFeatureInfo:(id)arg1 error:(id*)arg2;
- (unsigned long long)calculateLayoutDirectionForInput:(id)arg1 error:(id*)arg2;
- (id)configuration;
- (bool)decodeOutputForInput:(id)arg1 shouldDecodeScriptResult:(bool)arg2 shouldDecodeOrientationResult:(bool)arg3 shouldDecodeLayoutDirectionResult:(bool)arg4 error:(id*)arg5;
- (id)decoder;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)regionsByCorrectingOrientationOnSortedRegions:(id)arg1 correctAllRegions:(bool)arg2 image:(id)arg3 rectifier:(id)arg4 error:(id*)arg5;
- (id)regionsByCorrectingSequenceScriptOnSortedRegions:(id)arg1 correctAllRegions:(bool)arg2 image:(id)arg3 rectifier:(id)arg4 error:(id*)arg5;
- (void)setConfiguration:(id)arg1;
- (void)setDecoder:(id)arg1;
- (void)setModel:(id)arg1;

@end

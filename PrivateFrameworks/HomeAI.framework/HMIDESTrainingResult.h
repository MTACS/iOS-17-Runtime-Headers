
@interface HMIDESTrainingResult : HMFObject {
    NSArray * _layerParameters;
    NSArray * _losses;
    float  _postTrainingLoss;
    float  _preTrainingLoss;
}

@property (readonly) HMIDESMutableFloatArray *flattedTrainingResult;
@property (readonly) float l2Norm;
@property (readonly) NSArray *layerParameters;
@property (readonly) NSArray *losses;
@property (readonly) float postTrainingLoss;
@property (readonly) float preTrainingLoss;

- (void).cxx_destruct;
- (id)flattedTrainingResult;
- (id)initWithLayerParameters:(id)arg1 losses:(id)arg2 preTrainingLoss:(float)arg3 postTrainingLoss:(float)arg4;
- (float)l2Norm;
- (id)layerParameters;
- (id)losses;
- (float)postTrainingLoss;
- (float)preTrainingLoss;

@end

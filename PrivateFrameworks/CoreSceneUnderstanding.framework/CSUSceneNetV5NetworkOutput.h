
@interface CSUSceneNetV5NetworkOutput : NSObject {
    <CSUBuffer> * _aestheticsAttributeScores;
    <CSUBuffer> * _aestheticsGlobalScores;
    <CSUBuffer> * _detectionCoordinateOffsetMap;
    <CSUBuffer> * _detectionScoreHeatMap;
    <CSUBuffer> * _entityNetClassificationLikelihoods;
    <CSUBuffer> * _fingerprintEmbedding;
    <CSUBuffer> * _saliencyAttentionMap;
    <CSUBuffer> * _saliencyObjectnessMap;
    <CSUBuffer> * _sceneClassificationLikelihoods;
    <CSUBuffer> * _scenePrint;
}

@property (readonly) <CSUBuffer> *aestheticsAttributeScores;
@property (readonly) <CSUBuffer> *aestheticsGlobalScores;
@property (readonly) <CSUBuffer> *detectionCoordinateOffsetMap;
@property (readonly) <CSUBuffer> *detectionScoreHeatMap;
@property (readonly) <CSUBuffer> *entityNetClassificationLikelihoods;
@property (readonly) <CSUBuffer> *fingerprintEmbedding;
@property (readonly) <CSUBuffer> *saliencyAttentionMap;
@property (readonly) <CSUBuffer> *saliencyObjectnessMap;
@property (readonly) <CSUBuffer> *sceneClassificationLikelihoods;
@property (readonly) <CSUBuffer> *scenePrint;

- (void).cxx_destruct;
- (id)aestheticsAttributeScores;
- (id)aestheticsGlobalScores;
- (id)detectionCoordinateOffsetMap;
- (id)detectionScoreHeatMap;
- (id)entityNetClassificationLikelihoods;
- (id)fingerprintEmbedding;
- (id)initWithScenePrint:(id)arg1 sceneClassificationLikelihoods:(id)arg2 aestheticsAttributeScores:(id)arg3 aestheticsGlobalScores:(id)arg4 detectionScoreHeatMap:(id)arg5 detectionCoordinateOffsetMap:(id)arg6 saliencyAttentionMap:(id)arg7 saliencyObjectnessMap:(id)arg8 fingerprintEmbedding:(id)arg9 entityNetClassificationLikelihoods:(id)arg10;
- (id)saliencyAttentionMap;
- (id)saliencyObjectnessMap;
- (id)sceneClassificationLikelihoods;
- (id)scenePrint;

@end

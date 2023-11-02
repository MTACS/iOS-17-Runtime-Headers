
@interface PGPhotosChallengePublicEventAlgorithmWrapper : NSObject {
    PGGraph * _graph;
    PHPhotoLibrary * _photoLibrary;
    PGPublicEventDisambiguator * _publicEventDisambiguator;
}

- (void).cxx_destruct;
- (id)initWithEvaluationContext:(id)arg1;
- (unsigned short)predictedQuestionStateForAssetUUID:(id)arg1 publicEventMUID:(unsigned long long)arg2;

@end

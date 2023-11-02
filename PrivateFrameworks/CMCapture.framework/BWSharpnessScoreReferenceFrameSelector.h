
@interface BWSharpnessScoreReferenceFrameSelector : NSObject {
    int  _candidateFrameCount;
    struct opaqueCMSampleBuffer { } * _currentCandidateFrame;
    float  _currentCandidateSharpnessScore;
    bool  _faceScoresEnabled;
    int  _maxNumberOfFaceScores;
    int  _receivedCandidateFrameCount;
    CMISharpnessScore * _sharpnessScoreCalculator;
}

+ (id)externalMemoryDescriptorWithMaxInputDimensions:(struct { int x1; int x2; })arg1;

- (struct opaqueCMSampleBuffer { }*)addReferenceFrameCandidate:(struct opaqueCMSampleBuffer { }*)arg1 referenceFrameOut:(struct opaqueCMSampleBuffer {}**)arg2;
- (void)dealloc;
- (id)initWithCommandQueue:(id)arg1 externalMemoryResource:(id)arg2 candidateCount:(int)arg3;

@end

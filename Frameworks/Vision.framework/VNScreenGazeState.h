
@interface VNScreenGazeState : NSObject {
    unsigned int  _currentFrame;
    NSMutableArray * _faceObjectStates;
    int  _temporalSmoothingFrameCount;
}

- (void).cxx_destruct;

@end

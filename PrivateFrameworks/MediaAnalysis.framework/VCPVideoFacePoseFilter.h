
@interface VCPVideoFacePoseFilter : NSObject {
    struct Matrix<float, 12U, 12U, false> { 
        float m_data[144]; 
    }  _previousCovar;
    struct Matrix<float, 12U, 1U, false> { 
        float m_data[12]; 
    }  _previousState;
    bool  _previousStateIsValid;
}

- (id).cxx_construct;
- (int)eulerAnglesToRotation:(float)arg1 R:(float)arg2;
- (int)filteringPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1;
- (int)kalmanFiltering:(float)arg1 T:(float)arg2;
- (void)reset;
- (int)rotationToEulerAngles:(float)arg1 angles:(float)arg2;

@end

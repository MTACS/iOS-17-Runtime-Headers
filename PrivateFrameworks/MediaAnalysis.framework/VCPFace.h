
@interface VCPFace : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    float  _confidence;
    float  _faceQuality;
    bool  _leftEyeClosed;
    VNFaceObservation * _observation;
    bool  _rightEyeClosed;
    bool  _smile;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _torsoBounds;
    int  _trackID;
    long long  _yaw;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property float confidence;
@property float faceQuality;
@property bool leftEyeClosed;
@property (retain) VNFaceObservation *observation;
@property bool rightEyeClosed;
@property bool smile;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } torsoBounds;
@property int trackID;
@property long long yaw;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (float)confidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (float)faceQuality;
- (unsigned long long)flagsForOrientation:(bool)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)init;
- (bool)leftEyeClosed;
- (id)observation;
- (bool)rightEyeClosed;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setFaceQuality:(float)arg1;
- (void)setLeftEyeClosed:(bool)arg1;
- (void)setObservation:(id)arg1;
- (void)setRightEyeClosed:(bool)arg1;
- (void)setSmile:(bool)arg1;
- (void)setTorsoBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackID:(int)arg1;
- (void)setYaw:(long long)arg1;
- (bool)smile;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })torsoBounds;
- (int)trackID;
- (long long)yaw;

@end

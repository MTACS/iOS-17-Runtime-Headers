
@interface VirtualCameraWarpingStates : NSObject {
    VCCamera * _inputCamera;
    VCCamera * _outputCamera;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outputROI;
}

- (void)dealloc;

@end

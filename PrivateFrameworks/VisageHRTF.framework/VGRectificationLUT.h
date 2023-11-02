
@interface VGRectificationLUT : NSObject {
    NSData * _lookupTable;
    struct CGPoint { 
        double x; 
        double y; 
    }  _opticalCenter;
}

- (void).cxx_destruct;
- (id)initWithLookupTable:(id)arg1 withDistortionOpticalCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)undistortImage:(struct __CVBuffer { }*)arg1 toRectilinearImage:(struct __CVBuffer { }*)arg2;

@end

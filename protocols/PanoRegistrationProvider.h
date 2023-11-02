
@protocol PanoRegistrationProvider

@required

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })registerNewSlice:(void)arg1 withHFromGyro:(id /* block */)arg2 registrationCallback:(struct { void*x1[3]; })arg3;
- (void)replacePreviousSlice:(struct __CVBuffer { }*)arg1;

@optional

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_homography;
- (struct __CVBuffer { }*)residualFlow;
- (void)setResidualFlow:(struct __CVBuffer { }*)arg1;
- (void)set_homography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;

@end

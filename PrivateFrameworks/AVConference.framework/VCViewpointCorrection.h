
@interface VCViewpointCorrection : NSObject {
    struct CVAViewpointCorrection { } * _viewpointCorrectionRef;
}

- (void)dealloc;
- (id)init;

@end


@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics {
    struct CGSize { 
        double width; 
        double height; 
    }  _absDisplacementVectorIgnoringRubberbanding;
    double  _decelerationRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _destinationIgnoringRubberbanding;
    double  _durationUntilRubberband;
    double  _durationUntilStop;
    double  _durationUntilStopIgnoringRubberbanding;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialRubberbandingOrigin;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _initialRubberbandingVelocity;
    double  _linearDisplacementIgnoringRubberbanding;
    unsigned long long  _rubberBandingAxis;
}

- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (double)durationUntilStop;
- (id)init;
- (bool)isRubberBandingAfterDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })positionAfterDuration:(double)arg1;
- (double)speedAfterDuration:(double)arg1;
- (struct CGVector { double x1; double x2; })velocityAfterDuration:(double)arg1;

@end

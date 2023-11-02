
@interface MKFitnessRAPReport : NSObject {
    GEORPFeedbackRequestParameters * _feedbackRequestParameters;
    GEORPFeedbackRequestParameters * _requestParameters;
}

@property (nonatomic, readonly) GEORPFeedbackRequestParameters *requestParameters;

- (void).cxx_destruct;
- (id)initForRunningTrackIssue:(unsigned long long)arg1 trackCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 trackFeatureID:(id)arg3 nameOfTrack:(id)arg4 numberOfLanes:(id)arg5 comment:(id)arg6;
- (int)optionKeyForTrackIssue:(unsigned long long)arg1;
- (id)requestParameters;

@end

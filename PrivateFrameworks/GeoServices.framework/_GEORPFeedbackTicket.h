
@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket> {
    NSString * _emailAddress;
    GEORPFeedbackRequest * _feedbackRequest;
    GEORPFeedbackRequestParameters * _feedbackRequestParameters;
    <GEOMapItem> * _place;
    NSData * _pushToken;
    NSData * _resubmissionData;
    bool  _started;
    GEORPUserCredentials * _userCredentials;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)cancel;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKind;
- (id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end

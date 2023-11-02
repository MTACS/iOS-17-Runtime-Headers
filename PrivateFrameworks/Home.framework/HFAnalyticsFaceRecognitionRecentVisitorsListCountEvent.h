
@interface HFAnalyticsFaceRecognitionRecentVisitorsListCountEvent : HFAnalyticsEvent {
    NSNumber * _clusteredNoNamePersonCount;
    NSNumber * _faceCropCount;
    NSNumber * _unknownFaceCropCount;
    NSNumber * _unknownPersonCountTotal;
}

@property (nonatomic, retain) NSNumber *clusteredNoNamePersonCount;
@property (nonatomic, retain) NSNumber *faceCropCount;
@property (nonatomic, retain) NSNumber *unknownFaceCropCount;
@property (nonatomic, retain) NSNumber *unknownPersonCountTotal;

- (void).cxx_destruct;
- (id)clusteredNoNamePersonCount;
- (id)faceCropCount;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setClusteredNoNamePersonCount:(id)arg1;
- (void)setFaceCropCount:(id)arg1;
- (void)setUnknownFaceCropCount:(id)arg1;
- (void)setUnknownPersonCountTotal:(id)arg1;
- (id)unknownFaceCropCount;
- (id)unknownPersonCountTotal;

@end

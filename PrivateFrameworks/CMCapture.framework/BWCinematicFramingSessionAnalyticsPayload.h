
@interface BWCinematicFramingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _cinematicFramingControlMode;
    unsigned int  _cinematicFramingMaxPeopleDetected;
    NSString * _cinematicFramingROIHeatMap;
    NSString * _clientApplicationID;
}

@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) unsigned int cinematicFramingMaxPeopleDetected;
@property (nonatomic, copy) NSString *cinematicFramingROIHeatMap;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)cinematicFramingControlMode;
- (unsigned int)cinematicFramingMaxPeopleDetected;
- (id)cinematicFramingROIHeatMap;
- (id)clientApplicationID;
- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (void)reset;
- (void)setCinematicFramingControlMode:(unsigned int)arg1;
- (void)setCinematicFramingMaxPeopleDetected:(unsigned int)arg1;
- (void)setCinematicFramingROIHeatMap:(id)arg1;
- (void)setClientApplicationID:(id)arg1;

@end

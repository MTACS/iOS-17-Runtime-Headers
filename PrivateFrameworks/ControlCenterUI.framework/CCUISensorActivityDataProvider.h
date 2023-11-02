
@interface CCUISensorActivityDataProvider : NSObject {
    NSSet * _activeSensorActivityData;
    CCUISensorActivityData * _mostRecentSensorActivityData;
}

@property (nonatomic, retain) NSSet *activeSensorActivityData;
@property (nonatomic, copy) CCUISensorActivityData *mostRecentSensorActivityData;

- (void).cxx_destruct;
- (id)activeSensorActivityData;
- (id)mostRecentSensorActivityData;
- (void)setActiveSensorActivityData:(id)arg1;
- (void)setMostRecentSensorActivityData:(id)arg1;

@end

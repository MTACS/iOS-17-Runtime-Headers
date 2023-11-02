
@interface MNGuidanceEventFeedback : NSObject <NSCopying, NSSecureCoding> {
    double  _endDistance;
    double  _endTime;
    NSString * _enrouteNoticeIdentifier;
    unsigned long long  _enrouteNoticeIndex;
    NSString * _eventDescription;
    unsigned long long  _eventIndex;
    NSArray * _junctionViewImageIDs;
    double  _maneuverTime;
    NSData * _routeID;
    unsigned long long  _selectedPrimaryStringIndex;
    unsigned long long  _selectedSecondaryStringIndex;
    double  _startDistance;
    double  _startTime;
    unsigned long long  _stepID;
    int  _trafficCameraType;
    unsigned long long  _trafficColor;
    unsigned long long  _type;
    NSUUID * _uniqueID;
    double  _vehicleSpeed;
}

@property (nonatomic) double endDistance;
@property (nonatomic) double endTime;
@property (nonatomic, copy) NSString *enrouteNoticeIdentifier;
@property (nonatomic) unsigned long long enrouteNoticeIndex;
@property (nonatomic, copy) NSString *eventDescription;
@property (nonatomic) unsigned long long eventIndex;
@property (nonatomic, retain) NSArray *junctionViewImageIDs;
@property (nonatomic) double maneuverTime;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned long long selectedPrimaryStringIndex;
@property (nonatomic) unsigned long long selectedSecondaryStringIndex;
@property (nonatomic) double startDistance;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long stepID;
@property (nonatomic) int trafficCameraType;
@property (nonatomic) unsigned long long trafficColor;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSUUID *uniqueID;
@property (nonatomic) double vehicleSpeed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)endDistance;
- (double)endTime;
- (id)enrouteNoticeIdentifier;
- (unsigned long long)enrouteNoticeIndex;
- (id)eventDescription;
- (unsigned long long)eventIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)junctionViewImageIDs;
- (double)maneuverTime;
- (id)routeID;
- (unsigned long long)selectedPrimaryStringIndex;
- (unsigned long long)selectedSecondaryStringIndex;
- (void)setEndDistance:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setEnrouteNoticeIdentifier:(id)arg1;
- (void)setEnrouteNoticeIndex:(unsigned long long)arg1;
- (void)setEventDescription:(id)arg1;
- (void)setEventIndex:(unsigned long long)arg1;
- (void)setJunctionViewImageIDs:(id)arg1;
- (void)setManeuverTime:(double)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSelectedPrimaryStringIndex:(unsigned long long)arg1;
- (void)setSelectedSecondaryStringIndex:(unsigned long long)arg1;
- (void)setStartDistance:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStepID:(unsigned long long)arg1;
- (void)setTrafficCameraType:(int)arg1;
- (void)setTrafficColor:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (double)startDistance;
- (double)startTime;
- (unsigned long long)stepID;
- (int)trafficCameraType;
- (unsigned long long)trafficColor;
- (unsigned long long)type;
- (id)uniqueID;
- (double)vehicleSpeed;

@end
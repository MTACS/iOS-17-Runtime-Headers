
@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding> {
    NSDate * _currentETADate;
    bool  _hasMadeFinalPush;
    NSMapTable * _intermediateArrivalWaypointPostedNotifications;
    NSDate * _lastPostedETADate;
    NSDate * _lastPostedNotificationDate;
    NSDate * _lastUpdatedDate;
    unsigned long long  _maxPostedNotifications;
    double  _minimumETADifference;
    double  _minimumNotificationInterval;
    unsigned long long  _postedNotifications;
}

@property (nonatomic, retain) NSDate *currentETADate;
@property (nonatomic) bool hasMadeFinalPush;
@property (nonatomic, retain) NSMapTable *intermediateArrivalWaypointPostedNotifications;
@property (nonatomic, retain) NSDate *lastPostedETADate;
@property (nonatomic, retain) NSDate *lastPostedNotificationDate;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic) unsigned long long maxPostedNotifications;
@property (nonatomic) double minimumETADifference;
@property (nonatomic) double minimumNotificationInterval;
@property (nonatomic) unsigned long long postedNotifications;

+ (bool)supportsSecureCoding;
+ (id)unarchivingObjectsSet;

- (void).cxx_destruct;
- (id)currentETADate;
- (unsigned long long)currentlyNecessaryNotificationTypeForState:(id)arg1;
- (id)description;
- (void)didPostNotificationType:(unsigned long long)arg1 forState:(id)arg2;
- (void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMadeFinalPush;
- (bool)hasSentNotificationType:(unsigned long long)arg1 forState:(id)arg2 waypoint:(id)arg3;
- (void)incrementMinimumETADifference;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2;
- (id)intermediateArrivalWaypointPostedNotifications;
- (id)lastPostedETADate;
- (id)lastPostedNotificationDate;
- (id)lastUpdatedDate;
- (unsigned long long)maxPostedNotifications;
- (double)minimumETADifference;
- (double)minimumETADifferenceIncrement;
- (double)minimumNotificationInterval;
- (unsigned long long)postedNotifications;
- (void)setCurrentETADate:(id)arg1;
- (void)setHasMadeFinalPush:(bool)arg1;
- (void)setIntermediateArrivalWaypointPostedNotifications:(id)arg1;
- (void)setLastPostedETADate:(id)arg1;
- (void)setLastPostedNotificationDate:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setMaxPostedNotifications:(unsigned long long)arg1;
- (void)setMinimumETADifference:(double)arg1;
- (void)setMinimumNotificationInterval:(double)arg1;
- (void)setPostedNotifications:(unsigned long long)arg1;

@end


@interface MNDisplayETALegInfo : NSObject <NSSecureCoding> {
    NSDate * _eta;
    unsigned long long  _legIndex;
    unsigned long long  _remainingMinutes;
    NSTimeZone * _timeZone;
    NSUUID * _waypointID;
}

@property (nonatomic, retain) NSDate *eta;
@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long remainingMinutes;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) NSUUID *waypointID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eta;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)legIndex;
- (unsigned long long)remainingMinutes;
- (void)setEta:(id)arg1;
- (void)setLegIndex:(unsigned long long)arg1;
- (void)setRemainingMinutes:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWaypointID:(id)arg1;
- (id)timeZone;
- (id)waypointID;

@end

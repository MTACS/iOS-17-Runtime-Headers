
@interface ATXDailyTimeSummary : NSObject <NSSecureCoding> {
    double  _dnd;
    double  _driving;
    double  _exercise;
    double  _gaming;
    double  _mindfulness;
    double  _noMode;
    double  _outdoors;
    double  _personal;
    double  _quality;
    double  _reading;
    double  _screen;
    long long  _silencedNotificationCount;
    double  _sleep;
    double  _work;
}

@property (nonatomic) double dnd;
@property (nonatomic) double driving;
@property (nonatomic) double exercise;
@property (nonatomic) double gaming;
@property (nonatomic) double mindfulness;
@property (nonatomic) double noMode;
@property (nonatomic) double outdoors;
@property (nonatomic) double personal;
@property (nonatomic) double quality;
@property (nonatomic) double reading;
@property (nonatomic) double screen;
@property (nonatomic) long long silencedNotificationCount;
@property (nonatomic) double sleep;
@property (nonatomic) double work;

+ (bool)supportsSecureCoding;

- (double)dnd;
- (double)driving;
- (void)encodeWithCoder:(id)arg1;
- (double)exercise;
- (double)gaming;
- (id)initWithCoder:(id)arg1;
- (double)mindfulness;
- (double)noMode;
- (double)outdoors;
- (double)personal;
- (double)quality;
- (double)reading;
- (double)screen;
- (void)setDnd:(double)arg1;
- (void)setDriving:(double)arg1;
- (void)setExercise:(double)arg1;
- (void)setGaming:(double)arg1;
- (void)setMindfulness:(double)arg1;
- (void)setNoMode:(double)arg1;
- (void)setOutdoors:(double)arg1;
- (void)setPersonal:(double)arg1;
- (void)setQuality:(double)arg1;
- (void)setReading:(double)arg1;
- (void)setScreen:(double)arg1;
- (void)setSilencedNotificationCount:(long long)arg1;
- (void)setSleep:(double)arg1;
- (void)setWork:(double)arg1;
- (long long)silencedNotificationCount;
- (double)sleep;
- (double)work;

@end

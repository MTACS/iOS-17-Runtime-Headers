
@interface TVPPlaybackReportingEvent : NSObject {
    double  _duration;
    long long  _durationMS;
    bool  _isUIInteraction;
    NSString * _name;
    TVPPlaybackReportingEvent * _startEvent;
    double  _timestamp;
    long long  _type;
    id  _value;
}

@property (nonatomic) double duration;
@property (nonatomic) long long durationMS;
@property (nonatomic) bool isUIInteraction;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) TVPPlaybackReportingEvent *startEvent;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (long long)durationMS;
- (bool)isUIInteraction;
- (id)name;
- (void)setDuration:(double)arg1;
- (void)setDurationMS:(long long)arg1;
- (void)setIsUIInteraction:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setStartEvent:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)startEvent;
- (double)timestamp;
- (long long)type;
- (id)value;

@end


@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    struct { 
        double latitude; 
        double longitude; 
    }  _correctedCoordinate;
    double  _correctedCourse;
    NSError * _error;
    MNLocation * _location;
    long long  _locationEventType;
    MNLocationMatchInfo * _matchInfo;
    unsigned long long  _originalMatchType;
    double  _timestamp;
}

@property (nonatomic) struct { double x1; double x2; } correctedCoordinate;
@property (nonatomic) double correctedCourse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic) long long locationEventType;
@property (nonatomic, retain) MNLocationMatchInfo *matchInfo;
@property (nonatomic) unsigned long long originalMatchType;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (struct { double x1; double x2; })correctedCoordinate;
- (double)correctedCourse;
- (id)error;
- (id)location;
- (long long)locationEventType;
- (id)matchInfo;
- (unsigned long long)originalMatchType;
- (double)position;
- (void)setCorrectedCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCorrectedCourse:(double)arg1;
- (void)setError:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationEventType:(long long)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setOriginalMatchType:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

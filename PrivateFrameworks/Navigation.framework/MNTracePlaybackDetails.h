
@interface MNTracePlaybackDetails : NSObject <NSSecureCoding> {
    NSArray * _bookmarks;
    double  _currentPosition;
    unsigned long long  _eventType;
    NSString * _pedestrianTracePath;
    double  _pedestrianTraceStartRelativeTimestamp;
    unsigned long long  _recordedBookmarkID;
    double  _traceDuration;
    NSString * _tracePath;
}

@property (nonatomic, retain) NSArray *bookmarks;
@property (nonatomic) double currentPosition;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, copy) NSString *pedestrianTracePath;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;
@property (nonatomic) unsigned long long recordedBookmarkID;
@property (nonatomic) double traceDuration;
@property (nonatomic, copy) NSString *tracePath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarks;
- (double)currentPosition;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)pedestrianTracePath;
- (double)pedestrianTraceStartRelativeTimestamp;
- (unsigned long long)recordedBookmarkID;
- (void)setBookmarks:(id)arg1;
- (void)setCurrentPosition:(double)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setPedestrianTracePath:(id)arg1;
- (void)setPedestrianTraceStartRelativeTimestamp:(double)arg1;
- (void)setRecordedBookmarkID:(unsigned long long)arg1;
- (void)setTraceDuration:(double)arg1;
- (void)setTracePath:(id)arg1;
- (double)traceDuration;
- (id)tracePath;

@end

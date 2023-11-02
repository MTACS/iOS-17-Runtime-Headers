
@interface PLPhotosHighlightCluster : NSObject {
    NSSet * _assets;
    unsigned short  _category;
    NSDate * _endDate;
    int  _endTimeZoneOffset;
    unsigned short  _kind;
    NSSet * _moments;
    NSObject<NSCopying> * _objectID;
    NSDate * _startDate;
    int  _startTimeZoneOffset;
    unsigned short  _type;
}

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) unsigned short category;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short kind;
@property (nonatomic, readonly) NSSet *moments;
@property (nonatomic, readonly) NSObject<NSCopying> *objectID;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) unsigned short type;

- (void).cxx_destruct;
- (void)_calculatePropertyValues;
- (id)assets;
- (unsigned short)category;
- (id)endDate;
- (int)endTimeZoneOffset;
- (id)initWithMoments:(id)arg1;
- (unsigned short)kind;
- (id)moments;
- (id)objectID;
- (void)setAssets:(id)arg1;
- (void)setCategory:(unsigned short)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEndTimeZoneOffset:(int)arg1;
- (void)setKind:(unsigned short)arg1;
- (void)setMoments:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartTimeZoneOffset:(int)arg1;
- (void)setType:(unsigned short)arg1;
- (id)startDate;
- (int)startTimeZoneOffset;
- (unsigned short)type;

@end

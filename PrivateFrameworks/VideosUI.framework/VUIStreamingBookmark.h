
@interface VUIStreamingBookmark : NSObject {
    NSDate * _absoluteBookmarkTimestamp;
    NSNumber * _absoluteResumeTime;
    NSDate * _relativeBookmarkTimestamp;
    NSNumber * _relativeResumeTime;
}

@property (nonatomic, retain) NSDate *absoluteBookmarkTimestamp;
@property (nonatomic, retain) NSNumber *absoluteResumeTime;
@property (nonatomic, retain) NSDate *relativeBookmarkTimestamp;
@property (nonatomic, retain) NSNumber *relativeResumeTime;

- (void).cxx_destruct;
- (id)absoluteBookmarkTimestamp;
- (id)absoluteResumeTime;
- (id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4;
- (id)relativeBookmarkTimestamp;
- (id)relativeResumeTime;
- (void)setAbsoluteBookmarkTimestamp:(id)arg1;
- (void)setAbsoluteResumeTime:(id)arg1;
- (void)setRelativeBookmarkTimestamp:(id)arg1;
- (void)setRelativeResumeTime:(id)arg1;

@end

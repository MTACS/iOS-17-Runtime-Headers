
@interface VideosExtrasVideoTimeline : NSObject {
    NSArray * _events;
    NSArray * _timelineElements;
}

@property (nonatomic, readonly) NSArray *events;

- (void).cxx_destruct;
- (id)description;
- (id)eventForTime:(double)arg1;
- (id)events;
- (id)initWithTimelineElements:(id)arg1;

@end

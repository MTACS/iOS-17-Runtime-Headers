
@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <JEMediaPlaylistItem> {
    unsigned long long  _duration;
    NSArray * _eventData;
    unsigned long long  _startOverallPosition;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _timeRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, retain) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long startOverallPosition;
@property (nonatomic, readonly) unsigned long long startPosition;
@property (readonly) Class superclass;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } timeRange;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)duration;
- (id)eventData;
- (id)initWithPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 eventData:(id)arg3;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEventData:(id)arg1;
- (void)setStartOverallPosition:(unsigned long long)arg1;
- (void)setTimeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)startOverallPosition;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })timeRange;

@end

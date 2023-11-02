
@interface SHMediaTimeline : NSObject {
    <SHMediaTimelineDelegate> * _delegate;
    bool  _finished;
    NSArray * _mediaItems;
    SHSignature * _querySignature;
    NSObject<OS_dispatch_source> * _timerDispatchSource;
}

@property (nonatomic) <SHMediaTimelineDelegate> *delegate;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) NSArray *inScopeMediaItems;
@property (nonatomic, readonly) NSArray *mediaItems;
@property (nonatomic, readonly) SHSignature *querySignature;
@property (nonatomic, readonly) NSNumber *timeToNextMediaItemScopeChange;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerDispatchSource;

+ (id)blankMediaItemWhenNothingIsInScope:(id)arg1;
+ (double)countdownForMatchedMediaItem:(id)arg1;
+ (double)nextEventForRange:(id)arg1 atMatchOffset:(double)arg2;

- (void).cxx_destruct;
- (void)cancelTimerSource;
- (void)dealloc;
- (id)delegate;
- (id)earliestInscopeRangeForMatchedMediaItem:(id)arg1;
- (bool)finished;
- (id)inScopeMediaItems;
- (id)initWithMatch:(id)arg1;
- (bool)isFinished;
- (id)mediaItems;
- (id)querySignature;
- (void)setDelegate:(id)arg1;
- (void)setTimerDispatchSource:(id)arg1;
- (id)sortMediaItems:(id)arg1;
- (void)startGenerating;
- (void)startTimerForNextEvent;
- (void)stopGenerating;
- (id)timeToNextMediaItemScopeChange;
- (id)timerDispatchSource;

@end

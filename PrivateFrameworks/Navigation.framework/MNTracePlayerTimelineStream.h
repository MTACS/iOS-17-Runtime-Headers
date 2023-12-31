
@interface MNTracePlayerTimelineStream : NSObject {
    NSArray * _data;
    id /* block */  _handler;
    unsigned long long  _nextIndex;
    double  _nextUpdatePosition;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) unsigned long long nextIndex;
@property (nonatomic, readonly) double nextUpdatePosition;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithData:(id)arg1;
- (void)jumpToPosition:(double)arg1;
- (unsigned long long)nextIndex;
- (double)nextUpdatePosition;
- (void)setHandler:(id /* block */)arg1;
- (void)triggerNextUpdate;

@end


@interface CAMetalDisplayLink : NSObject {
    <CAMetalDisplayLinkDelegate> * _delegate;
    void * _impl;
}

@property (nonatomic) <CAMetalDisplayLinkDelegate> *delegate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) float preferredFrameLatency;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;

- (void).cxx_destruct;
- (id)_initWithMetalLinkItem:(void*)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithMetalLayer:(id)arg1;
- (void)invalidate;
- (bool)isPaused;
- (float)preferredFrameLatency;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameLatency:(float)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;

@end


@interface CADisplayLink : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) long long actualFramesPerSecond;
@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long frameInterval;
@property (nonatomic, readonly) double heartbeatRate;
@property unsigned int highFrameRateReason;
@property (nonatomic, readonly) double maximumRefreshRate;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) id userInfo;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)dispatchDeferredDisplayLink:(unsigned long long)arg1;
+ (void)dispatchDeferredDisplayLinks;
+ (void)dispatchDeferredDisplayLinksWithDisplayId:(unsigned int)arg1;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (double)expectedWakeupBeforeCommitDeadline:(double)arg1;
+ (void)notifyDisplayChange:(unsigned long long)arg1;
+ (void)setWillFireHandler:(id /* block */)arg1;
+ (bool)supportsExpectedWakeupBeforeCommitDeadline;
+ (long long)willFireInfoVersion;

- (id)_initWithDisplayLinkItem:(void*)arg1;
- (long long)actualFramesPerSecond;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (double)duration;
- (long long)frameInterval;
- (double)heartbeatRate;
- (unsigned int)highFrameRateReason;
- (void)invalidate;
- (bool)isPaused;
- (double)maximumRefreshRate;
- (long long)minimumFrameDuration;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (long long)preferredFramesPerSecond;
- (long long)priority;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setFrameInterval:(long long)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setHighFrameRateReasons:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (double)targetTimestamp;
- (double)timestamp;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)rc_displayWithFramesPerSecond:(long long)arg1 handlerBlock:(id /* block */)arg2;

@end


@interface AVPlayerInterstitialEventController : AVPlayerInterstitialEventMonitor {
    NSObject<OS_dispatch_queue> * _ivarQueue;
}

@property (copy) NSArray *events;

+ (id)interstitialEventControllerWithPrimaryPlayer:(id)arg1;

- (void)cancelCurrentEventWithResumptionOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (id)initWithPrimaryPlayer:(id)arg1;
- (void)setEvents:(id)arg1;

@end

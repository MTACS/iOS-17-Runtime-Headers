
@protocol ARCoachingUpdateManagerDelegate <NSObject>

@required

- (void)drawInDrawable:(id <CAMetalDrawable>)arg1 withCommandBuffer:(id <MTLCommandBuffer>)arg2 timeDelta:(double)arg3;
- (void)resizeForDrawable:(id <CAMetalDrawable>)arg1;
- (void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2;

@end

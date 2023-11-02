
@interface BLSAlwaysOnTimelineUnconfiguredEntry : BLSAlwaysOnTimelineEntry

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic) double duration;
@property (nonatomic) long long requestedFidelity;
@property (nonatomic, retain) <NSObject><NSCopying> *timelineIdentifier;
@property (nonatomic, retain) <NSObject> *userObject;

+ (id)entryForPresentationTime:(id)arg1;
+ (id)entryForPresentationTime:(id)arg1 animated:(bool)arg2 userObject:(id)arg3;
+ (id)entryForPresentationTime:(id)arg1 withRequestedFidelity:(long long)arg2;
+ (id)entryForPresentationTime:(id)arg1 withRequestedFidelity:(long long)arg2 animated:(bool)arg3 userObject:(id)arg4;

- (id)initWithPresentationTime:(id)arg1 requestedFidelity:(long long)arg2 animated:(bool)arg3 duration:(double)arg4 timelineIdentifier:(id)arg5 userObject:(id)arg6;

@end


@interface IPAVideoPlaybackSettings : IPAEditDescription {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _naturalDuration;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } naturalDuration;

+ (Class)expectedOperationClass;
+ (void)initialize;
+ (Class)operationClassForIdentifier:(id)arg1;
+ (id)playbackSettingsForAdjustments:(id)arg1;
+ (id)presetifyAdjustmentStack:(id)arg1;

- (id)archivalRepresentation;
- (id)debugDescription;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByInsertingOrReplacingOperation:(id)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1 naturalDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)isEqualToDescription:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })naturalPlaybackRange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalTimeForPosterFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalTimeFromScaledTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)operationWithIdentifier:(id)arg1;
- (id)posterFrameOperation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })scaledDuration;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })scaledPlaybackRangeForScaledDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })scaledTimeFromNaturalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)slomoOperation;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)trimOperation;

@end

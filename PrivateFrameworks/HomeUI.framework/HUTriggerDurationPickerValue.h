
@interface HUTriggerDurationPickerValue : NSObject {
    NSNumber * _duration;
}

@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) bool hasDuration;

+ (id)valueWithDuration:(double)arg1;
+ (id)valueWithNoDuration;

- (void).cxx_destruct;
- (id)duration;
- (bool)hasDuration;
- (id)init;
- (id)initWithDuration:(id)arg1;

@end

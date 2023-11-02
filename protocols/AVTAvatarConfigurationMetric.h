
@protocol AVTAvatarConfigurationMetric <NSObject>

@required

- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
- (unsigned long long)distanceFromConfiguration:(AVTAvatarConfiguration *)arg1 toConfiguration:(AVTAvatarConfiguration *)arg2;
- (long long)gapFromDistance:(unsigned long long)arg1;

@end

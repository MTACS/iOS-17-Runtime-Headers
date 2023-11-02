
@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration <NSCopying, NSMutableCopying>

@property bool shouldRebuildOnManateeKeyLoss;
@property bool shouldSkipCloudPulls;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

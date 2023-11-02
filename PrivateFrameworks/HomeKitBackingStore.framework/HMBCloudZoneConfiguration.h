
@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying> {
    bool  _shouldRebuildOnManateeKeyLoss;
    bool  _shouldSkipCloudPulls;
}

@property bool shouldRebuildOnManateeKeyLoss;
@property bool shouldSkipCloudPulls;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setShouldRebuildOnManateeKeyLoss:(bool)arg1;
- (void)setShouldSkipCloudPulls:(bool)arg1;
- (bool)shouldRebuildOnManateeKeyLoss;
- (bool)shouldSkipCloudPulls;

@end

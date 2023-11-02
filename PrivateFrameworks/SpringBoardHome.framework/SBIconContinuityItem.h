
@interface SBIconContinuityItem : NSObject {
    long long  _badgeType;
    NSString * _systemImageName;
}

@property (nonatomic, readonly) long long badgeType;
@property (nonatomic, readonly) NSString *systemImageName;

+ (long long)_continuityBadgeTypeForNSString:(id)arg1;
+ (id)_resolvedItemForExplicitBadgeType:(long long)arg1 deviceTypeIdentifier:(id)arg2;
+ (id)itemForBadgeTypeString:(id)arg1 deviceTypeIdentifier:(id)arg2;
+ (id)itemForContinuityInfo:(id)arg1;
+ (id)itemWithBadgeType:(long long)arg1 deviceTypeIdentifier:(id)arg2;

- (void).cxx_destruct;
- (long long)badgeType;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBadgeType:(long long)arg1 systemImageName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;

@end

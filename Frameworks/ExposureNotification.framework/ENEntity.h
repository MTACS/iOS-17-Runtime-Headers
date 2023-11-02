
@interface ENEntity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _agencyColor;
    NSNumber * _agencyHeaderStyle;
    NSArray * _agencyHeaderTextColor;
    NSString * _bundleIdentifier;
    NSString * _localizedAgencyImageURL;
    NSString * _localizedAgencyName;
    NSString * _localizedAgencyTurndownMessage;
    NSString * _localizedRegionName;
    ENRegion * _region;
}

@property (nonatomic, readonly, copy) NSArray *agencyColor;
@property (nonatomic, readonly, copy) NSNumber *agencyHeaderStyle;
@property (nonatomic, readonly, copy) NSArray *agencyHeaderTextColor;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedAgencyImageURL;
@property (nonatomic, readonly, copy) NSString *localizedAgencyName;
@property (nonatomic, readonly, copy) NSString *localizedAgencyTurndownMessage;
@property (nonatomic, readonly, copy) NSString *localizedRegionName;
@property (nonatomic, readonly, copy) ENRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)agencyColor;
- (id)agencyHeaderStyle;
- (id)agencyHeaderTextColor;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 agencyColor:(id)arg2 agencyHeaderStyle:(id)arg3 agencyHeaderTextColor:(id)arg4 localizedAgencyName:(id)arg5 localizedAgencyImageURL:(id)arg6 localizedAgencyTurndownMessage:(id)arg7 localizedRegionName:(id)arg8 region:(id)arg9;
- (id)initWithBundleID:(id)arg1 region:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedAgencyImageURL;
- (id)localizedAgencyName;
- (id)localizedAgencyTurndownMessage;
- (id)localizedRegionName;
- (id)region;

@end

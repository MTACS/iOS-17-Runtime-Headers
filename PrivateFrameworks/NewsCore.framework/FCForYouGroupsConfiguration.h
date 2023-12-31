
@interface FCForYouGroupsConfiguration : NSObject {
    NSString * _configuration;
    NSDictionary * _groupConfigurationsByIdentifier;
    double  _weekendGreatStoriesYouMissedTimeRange;
}

@property (nonatomic, copy) NSDictionary *groupConfigurationsByIdentifier;
@property (nonatomic, readonly) double weekendGreatStoriesYouMissedTimeRange;

+ (id)_groupIdentifiersByType;

- (void).cxx_destruct;
- (bool)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultPrecedingGroupsCount:(long long)arg1;
- (id)_identifierForGroupType:(long long)arg1;
- (id)configurationForGroupType:(long long)arg1;
- (id)groupConfigurationsByIdentifier;
- (unsigned long long)hash;
- (id)initWithJSONConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGroupConfigurationsByIdentifier:(id)arg1;
- (double)weekendGreatStoriesYouMissedTimeRange;

@end

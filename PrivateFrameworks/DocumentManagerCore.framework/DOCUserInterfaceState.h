
@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _displayModes;
    NSMutableDictionary * _groupingBehaviors;
    NSDate * _lastUpdatedDate;
    NSData * _lastUsedOpenSaveLocation;
    NSData * _mostRecentEffectiveRootLocation;
    NSData * _mostRecentlyVisitedLocation;
    NSString * _selectedTabIdentifier;
    NSDictionary * _sortingMode;
    NSNumber * _userPrefersTiledSidebarHidden;
}

@property (nonatomic, readonly) NSMutableDictionary *displayModes;
@property (nonatomic, readonly) NSMutableDictionary *groupingBehaviors;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, retain) NSData *lastUsedOpenSaveLocation;
@property (nonatomic, retain) NSData *mostRecentEffectiveRootLocation;
@property (nonatomic, retain) NSData *mostRecentlyVisitedLocation;
@property (nonatomic, retain) NSString *selectedTabIdentifier;
@property (nonatomic, retain) NSDictionary *sortingMode;
@property (nonatomic, retain) NSNumber *userPrefersTiledSidebarHidden;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)bumpLastUpdatedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayModes;
- (void)encodeWithCoder:(id)arg1;
- (id)groupingBehaviors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedDate;
- (id)lastUsedOpenSaveLocation;
- (id)mostRecentEffectiveRootLocation;
- (id)mostRecentlyVisitedLocation;
- (id)selectedTabIdentifier;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setLastUsedOpenSaveLocation:(id)arg1;
- (void)setMostRecentEffectiveRootLocation:(id)arg1;
- (void)setMostRecentlyVisitedLocation:(id)arg1;
- (void)setSelectedTabIdentifier:(id)arg1;
- (void)setSortingMode:(id)arg1;
- (void)setUserPrefersTiledSidebarHidden:(id)arg1;
- (id)sortingMode;
- (id)userPrefersTiledSidebarHidden;

@end

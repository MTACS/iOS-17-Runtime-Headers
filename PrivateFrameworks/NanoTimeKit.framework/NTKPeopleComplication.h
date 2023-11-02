
@interface NTKPeopleComplication : NTKComplication {
    NSString * _abbreviation;
    NSString * _contactID;
    NSString * _fullName;
    NSString * _shortName;
    NSString * _storeBackedContactID;
}

@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) NSString *contactID;
@property (getter=isFavoritedPerson, nonatomic, readonly) bool favoritedPerson;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *storeBackedContactID;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)_complicationPickerShouldShowMoreButtonForList:(id)arg1;
+ (id)allValidFavoriteContacts;
+ (id)complicationForContact:(id)arg1 forFavoriteList:(bool)arg2;
+ (id)localizedNameForContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_complicationTypeString;
- (void)_contactsCacheDidChange;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_refreshContactInfoNotifyOfChange;
- (void)_registerWithSwitch:(bool)arg1;
- (void)_updateStateWithContact:(id)arg1 foundAsPrimaryId:(bool)arg2;
- (id)abbreviation;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)contactID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFavoritedPerson;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_contactIdentifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_sectionIdentifier;
- (id)shortName;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)storeBackedContactID;

@end

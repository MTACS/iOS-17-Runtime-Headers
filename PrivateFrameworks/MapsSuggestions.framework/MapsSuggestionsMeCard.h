
@interface MapsSuggestionsMeCard : NSObject <NSCopying> {
    bool  _hasCorrected;
    bool  _hasGeocoded;
    bool  _hasHomeOrWork;
    bool  _hasHomeOrWorkOrSchool;
    NSArray * _hiddenShortcutsForHome;
    NSArray * _hiddenShortcutsForSchool;
    NSArray * _hiddenShortcutsForWork;
    NSArray * _mapItemsForAll;
    NSArray * _mapItemsForHome;
    NSArray * _mapItemsForSchool;
    NSArray * _mapItemsForWork;
    NSDictionary * _perCNPostalAddress;
    NSArray * _shortcutsForAll;
    NSArray * _shortcutsForAllIncludingHidden;
    NSArray * _shortcutsForHome;
    NSArray * _shortcutsForSchool;
    NSArray * _shortcutsForWork;
}

@property (nonatomic, readonly) bool hasCorrected;
@property (nonatomic, readonly) bool hasGeocoded;
@property (nonatomic, readonly) bool hasHomeOrWork;
@property (nonatomic, readonly) bool hasHomeOrWorkOrSchool;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForHome;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForSchool;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForWork;
@property (nonatomic, readonly) NSArray *mapItemsForAll;
@property (nonatomic, readonly) NSArray *mapItemsForHome;
@property (nonatomic, readonly) NSArray *mapItemsForSchool;
@property (nonatomic, readonly) NSArray *mapItemsForWork;
@property (nonatomic, readonly) NSArray *shortcutsForAll;
@property (nonatomic, readonly) NSArray *shortcutsForAllIncludingHidden;
@property (nonatomic, readonly) NSArray *shortcutsForHome;
@property (nonatomic, readonly) NSArray *shortcutsForSchool;
@property (nonatomic, readonly) NSArray *shortcutsForWork;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasCorrected;
- (bool)hasGeocoded;
- (bool)hasHomeOrWork;
- (bool)hasHomeOrWorkOrSchool;
- (id)hiddenShortcutsForHome;
- (id)hiddenShortcutsForSchool;
- (id)hiddenShortcutsForWork;
- (id)initWithShortcuts:(id)arg1 hasCorrected:(bool)arg2 hasGeocoded:(bool)arg3;
- (id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(bool)arg3 hasGeocoded:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMeCard:(id)arg1;
- (id)mapItemsForAll;
- (id)mapItemsForHome;
- (id)mapItemsForSchool;
- (id)mapItemsForWork;
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;
- (id)shortcutsForAll;
- (id)shortcutsForAllIncludingHidden;
- (id)shortcutsForHome;
- (id)shortcutsForSchool;
- (id)shortcutsForWork;
- (id)shortcutsPerCNPostalAddress;

@end

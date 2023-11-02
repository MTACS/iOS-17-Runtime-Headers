
@interface SBHFocusMode : NSObject <BSDescriptionProviding> {
    NSMutableSet * _allowedApplicationBundleIdentifiers;
    UIColor * _color;
    NSMutableSet * _deniedApplicationBundleIdentifiers;
    SBFolder * _folder;
    bool  _hidesOnlyDeniedApplicationBadges;
    NSString * _identifier;
    NSString * _name;
    bool  _showsOnlyAllowedApplicationBadges;
    bool  _sleepFocus;
    NSString * _symbol;
}

@property (nonatomic, copy) NSMutableSet *allowedApplicationBundleIdentifiers;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, readonly) bool customizedHomeScreenPagesEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSMutableSet *deniedApplicationBundleIdentifiers;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesOnlyDeniedApplicationBadges;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *lists;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool showsOnlyAllowedApplicationBadges;
@property (getter=isSleepFocus, nonatomic) bool sleepFocus;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbol;

- (void).cxx_destruct;
- (void)addToList:(id)arg1;
- (id)allowedApplicationBundleIdentifiers;
- (id)color;
- (bool)customizedHomeScreenPagesEnabled;
- (id)deniedApplicationBundleIdentifiers;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)folder;
- (bool)hidesOnlyDeniedApplicationBadges;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 folder:(id)arg2;
- (bool)isSleepFocus;
- (id)lists;
- (id)name;
- (void)removeFromList:(id)arg1;
- (void)setAllowedApplicationBundleIdentifiers:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDeniedApplicationBundleIdentifiers:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setHidesOnlyDeniedApplicationBadges:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShowsOnlyAllowedApplicationBadges:(bool)arg1;
- (void)setSleepFocus:(bool)arg1;
- (void)setSymbol:(id)arg1;
- (bool)showsOnlyAllowedApplicationBadges;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)symbol;
- (bool)wantsListVisible:(id)arg1;

@end


@interface SBAlwaysOnPolicySettings : PTSettings {
    long long  _focusStrategy;
    bool  _semanticTypeCustom;
    bool  _semanticTypeDefault;
    bool  _semanticTypeDriving;
    bool  _semanticTypeExercise;
    bool  _semanticTypeGaming;
    bool  _semanticTypeMindfulness;
    bool  _semanticTypePersonal;
    bool  _semanticTypeReading;
    bool  _semanticTypeSleep;
    bool  _semanticTypeWork;
}

@property (nonatomic, copy) NSSet *alwaysOnDisablingFocusSemanticTypes;
@property (nonatomic) long long focusStrategy;
@property (nonatomic) bool semanticTypeCustom;
@property (nonatomic) bool semanticTypeDefault;
@property (nonatomic) bool semanticTypeDriving;
@property (nonatomic) bool semanticTypeExercise;
@property (nonatomic) bool semanticTypeGaming;
@property (nonatomic) bool semanticTypeMindfulness;
@property (nonatomic) bool semanticTypePersonal;
@property (nonatomic) bool semanticTypeReading;
@property (nonatomic) bool semanticTypeSleep;
@property (nonatomic) bool semanticTypeWork;

+ (id)_keyPathForSemanticTypeName:(id)arg1;
+ (id)settingsControllerModule;

- (id)alwaysOnDisablingFocusSemanticTypes;
- (long long)focusStrategy;
- (bool)semanticTypeCustom;
- (bool)semanticTypeDefault;
- (bool)semanticTypeDriving;
- (bool)semanticTypeExercise;
- (bool)semanticTypeGaming;
- (bool)semanticTypeMindfulness;
- (bool)semanticTypePersonal;
- (bool)semanticTypeReading;
- (bool)semanticTypeSleep;
- (bool)semanticTypeWork;
- (void)setAlwaysOnDisablingFocusSemanticTypes:(id)arg1;
- (void)setDefaultValues;
- (void)setFocusStrategy:(long long)arg1;
- (void)setSemanticTypeCustom:(bool)arg1;
- (void)setSemanticTypeDefault:(bool)arg1;
- (void)setSemanticTypeDriving:(bool)arg1;
- (void)setSemanticTypeExercise:(bool)arg1;
- (void)setSemanticTypeGaming:(bool)arg1;
- (void)setSemanticTypeMindfulness:(bool)arg1;
- (void)setSemanticTypePersonal:(bool)arg1;
- (void)setSemanticTypeReading:(bool)arg1;
- (void)setSemanticTypeSleep:(bool)arg1;
- (void)setSemanticTypeWork:(bool)arg1;

@end

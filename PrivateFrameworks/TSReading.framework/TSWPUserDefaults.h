
@interface TSWPUserDefaults : NSObject

+ (bool)automaticallyDetectLinks;
+ (bool)automaticallyDetectLists;
+ (id)invisiblesColor;
+ (bool)p_UserDefaultSet:(id)arg1 force:(bool)arg2;
+ (void)registerUserDefaults:(bool)arg1;
+ (void)setAutomaticallyDetectLinks:(bool)arg1;
+ (void)setAutomaticallyDetectLists:(bool)arg1;
+ (void)setInvisiblesColor:(id)arg1;
+ (void)setSpellCheckingEnabled:(bool)arg1;
+ (void)setSuperscriptNumericalSuffixes:(bool)arg1;
+ (bool)spellCheckingEnabled;
+ (bool)superscriptNumericalSuffixes;

@end

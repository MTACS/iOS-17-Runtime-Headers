
@protocol PSTopLevelController

@required

- (void)selectDefaultCategoryForced:(bool)arg1;
- (void)setSkipSelectingDefaultCategoryOnLaunch:(bool)arg1;
- (bool)skipSelectingDefaultCategoryOnLaunch;
- (PSSpecifier *)specifierForBundle:(NSString *)arg1;

@end

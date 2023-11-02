
@interface LSAltIconManager : NSObject

+ (id)sharedInstance;

- (id)_getPreferredIconNameForIdentifier:(id)arg1;
- (bool)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id*)arg4;
- (void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2;
- (id)alternateIconNameForIdentifier:(id)arg1 error:(id*)arg2;
- (void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2;
- (id)init;
- (bool)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(id /* block */)arg4;

@end

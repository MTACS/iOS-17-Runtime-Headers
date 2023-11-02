
@interface MCUISpecifierProvider : NSObject {
    <MCUISpecifierProviderDelegate> * _delegate;
}

@property (nonatomic) <MCUISpecifierProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)_specifierForProfile:(id)arg1 profileInstalled:(bool)arg2;
- (id)_specifiersForProfiles:(id)arg1 singularHeader:(id)arg2 pluralHeaader:(id)arg3 profilesInstalled:(bool)arg4;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isSectionPopulated:(id)arg1 outIsPlural:(bool*)arg2;
- (void)loadProfileFromSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifierWithName:(id)arg1 detail:(Class)arg2;
- (id)specifiersForInstalledProfiles:(id)arg1;
- (id)specifiersForMDMProfiles:(id)arg1;
- (id)specifiersForUninstalledProfiles:(id)arg1;

@end

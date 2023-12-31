
@interface CNContactsUserDefaultsX : CNContactsUserDefaults {
    CNFoundationUserDefaults * _foundationUserDefaults;
}

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (void).cxx_destruct;
- (id)countryCode;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (id)foundationUserDefaults;
- (id)init;
- (id)initWithFoundationUserDefaults:(id)arg1;
- (bool)isShortNameFormatEnabled;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (void)setFoundationUserDefaults:(id)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setShortNameFormatEnabled:(bool)arg1;
- (void)setShortNameFormatPrefersNicknames:(bool)arg1;
- (long long)shortNameFormat;
- (bool)shortNameFormatPrefersNicknames;
- (long long)sortOrder;

@end

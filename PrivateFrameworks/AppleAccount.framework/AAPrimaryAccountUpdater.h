
@interface AAPrimaryAccountUpdater : AAVersionUpdater <AADataclassVersionUpdateProtocol> {
    ACAccount * _appleAccount;
}

+ (id)orderedVersions;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (bool)performVersionUpdate0ToVersion1;
- (bool)performVersionUpdate1ToVersion2;

@end

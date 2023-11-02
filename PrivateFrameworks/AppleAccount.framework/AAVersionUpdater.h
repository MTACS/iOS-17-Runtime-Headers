
@interface AAVersionUpdater : NSObject <AAVersionUpdaterProtocol, AAVersionUpdaterProtocol_Internal> {
    unsigned long long  _currentVersion;
}

@property (nonatomic) unsigned long long currentVersion;

- (id)_latestVersion;
- (void)_performVersionUpdate:(unsigned long long)arg1;
- (unsigned long long)currentVersion;
- (id)initWithStartingVersion:(unsigned long long)arg1;
- (bool)needsUpdate;
- (void)performMigrations;
- (void)setCurrentVersion:(unsigned long long)arg1;

@end

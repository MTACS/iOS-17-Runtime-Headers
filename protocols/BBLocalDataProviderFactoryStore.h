
@protocol BBLocalDataProviderFactoryStore

@required

- (void)addDataProvider:(id <BBDataProvider>)arg1 performMigration:(bool)arg2;
- (void)addParentSectionInfo:(BBSectionInfo *)arg1 displayName:(NSString *)arg2 icon:(BBSectionIcon *)arg3;
- (void)addParentSectionInfo:(BBSectionInfo *)arg1 displayName:(NSString *)arg2 icon:(BBSectionIcon *)arg3 universalSectionID:(NSString *)arg4;
- (void)removeDataProviderWithSectionID:(NSString *)arg1;

@end


@protocol BBDataProvider <BBSectionIdentity>

@required

- (NSArray *)sortDescriptors;

@optional

- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (NSSet *)bulletinsFilteredBy:(unsigned long long)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned long long)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)clearedInfoForClearingBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 lastClearedInfo:(id)arg3;
- (void)dataProviderDidLoad;
- (NSArray *)defaultSubsectionInfos;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (void)handleBulletinActionResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BBActionResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (BBSectionParameters *)sectionParameters;
- (bool)syncsBulletinDismissal;

@end

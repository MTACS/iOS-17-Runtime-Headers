
@interface MFMigrationPersistence : NSObject <MFUserAgent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)migrateDatabaseAtPath:(id)arg1;

- (void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2;
- (bool)canRegisterForAPSPush;
- (bool)canUseSpotlightIndex;
- (id)init;
- (bool)isAllowedToAccessProtectedData;
- (bool)isForeground;
- (bool)isMaild;
- (bool)isMobileMail;
- (void)networkActivityEnded:(id)arg1;
- (void)networkActivityStarted:(id)arg1;

@end

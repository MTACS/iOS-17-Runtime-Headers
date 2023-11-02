
@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding> {
    NSMutableArray * _journalledNotifications;
    unsigned long long  _operationType;
    bool  _preliminary;
    NSString * _primaryBundleID;
    double  _timestamp;
}

+ (void)createInstallJournalDirectoryIfRequired;
+ (bool)shouldJournalNotificationType:(int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_writeJournalUnconditionally;
- (bool)applicableForCurrentDatabase;
- (void)encodeWithCoder:(id)arg1;
- (bool)entityExists;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned long long)arg2;
- (unsigned long long)installOperation;
- (bool)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(bool)arg2;
- (id)journalURL;
- (id)journalledNotifications;
- (id)primaryBundleID;
- (void)removeJournalAfterNotificationFence;
- (void)removeJournalFile;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(bool)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(bool)arg3 options:(id)arg4;
- (void)setPrimaryBundleID:(id)arg1;
- (bool)shouldExpectEntityToExist;
- (id)synthesizedPreliminaryJournalledNotifications;
- (double)timestamp;
- (void)writeFinalJournal;
- (void)writePreliminaryJournal;

@end

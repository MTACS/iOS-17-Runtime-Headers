
@interface ECPOPAccount : ECAccount

@property (nonatomic) long long bigMessageWarningSize;
@property (nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer;
@property (nonatomic, readonly) bool daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) long long deletionPolicy;
@property (nonatomic) bool hasNotFinishedFirstTimeSync;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)bigMessageWarningSize;
- (long long)daysAfterDownloadToDeleteMessagesFromServer;
- (bool)daysAfterDownloadToDeleteMessagesFromServerIsSet;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (long long)deletionPolicy;
- (bool)hasNotFinishedFirstTimeSync;
- (void)setBigMessageWarningSize:(long long)arg1;
- (void)setDaysAfterDownloadToDeleteMessagesFromServer:(long long)arg1;
- (void)setDeletionPolicy:(long long)arg1;
- (void)setHasNotFinishedFirstTimeSync:(bool)arg1;

@end

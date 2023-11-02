
@interface CKiCloudSyncStateModel : NSObject {
    NSString * _keepMessagesPreference;
    NSString * _messagesInCloudCount;
    bool  _syncAvailable;
    long long  _syncState;
    NSString * _syncStatus;
    NSString * _syncStatusFooterSubstringForHyperlink;
    NSString * _syncStatusFooterText;
}

@property (nonatomic, retain) NSString *keepMessagesPreference;
@property (nonatomic, retain) NSString *messagesInCloudCount;
@property (getter=isSyncAvailable, nonatomic) bool syncAvailable;
@property (nonatomic) long long syncState;
@property (nonatomic, retain) NSString *syncStatus;
@property (nonatomic, retain) NSString *syncStatusFooterSubstringForHyperlink;
@property (nonatomic, retain) NSString *syncStatusFooterText;

- (void).cxx_destruct;
- (id)init;
- (bool)isSyncAvailable;
- (id)keepMessagesPreference;
- (id)messagesInCloudCount;
- (void)setKeepMessagesPreference:(id)arg1;
- (void)setMessagesInCloudCount:(id)arg1;
- (void)setSyncAvailable:(bool)arg1;
- (void)setSyncState:(long long)arg1;
- (void)setSyncStatus:(id)arg1;
- (void)setSyncStatusFooterSubstringForHyperlink:(id)arg1;
- (void)setSyncStatusFooterText:(id)arg1;
- (long long)syncState;
- (id)syncStatus;
- (id)syncStatusFooterSubstringForHyperlink;
- (id)syncStatusFooterText;

@end

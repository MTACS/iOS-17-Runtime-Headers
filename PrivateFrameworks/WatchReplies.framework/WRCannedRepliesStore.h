
@interface WRCannedRepliesStore : NSObject {
    NSString * _cachedLanguage;
    NSArray * _cachedLocalizedReplies;
    NSArray * _cannedReplies;
    unsigned long long  _category;
    bool  _didLocalizeDefaultReplies;
    bool  _didMigrationCheck;
    NPSDomainAccessor * _domainAccessor;
    WRReplyStoreInfo * _info;
    NSRecursiveLock * _lock;
    NSObject<OS_os_log> * _log;
    NPSManager * _npsManager;
}

+ (bool)isTinker;
+ (id)supportedLanguages;
+ (bool)supportsEnhancedEditing;

- (void).cxx_destruct;
- (id)cannedReplies;
- (void)dealloc;
- (id)domainAccessor;
- (void)handleStoreChange;
- (bool)includeSmartReplies;
- (id)init;
- (id)initWithCategory:(unsigned long long)arg1;
- (void)invalidateCachesIfNeededForLanguage:(id)arg1;
- (id)keyForDefaultReply:(id)arg1;
- (void)loadCannedRepliesIfNeeded;
- (void)localizeDefaultRepliesIfNeeded;
- (id)localizedDefaultReply:(id)arg1;
- (id)localizedFormalDefaultReply:(id)arg1;
- (id)migrateRepliesIfNeeded:(id)arg1;
- (id)npsManager;
- (id)repliesForLanguage:(id)arg1;
- (void)saveReplies:(id)arg1;
- (void)setCannedReplies:(id)arg1;
- (void)setIncludeSmartReplies:(bool)arg1;
- (bool)supportsSmartReplies;
- (bool)usesFormalReplies;

@end

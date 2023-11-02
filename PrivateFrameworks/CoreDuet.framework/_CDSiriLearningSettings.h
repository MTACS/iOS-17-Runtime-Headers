
@interface _CDSiriLearningSettings : NSObject {
    NSArray * _allLearningDisabledBundleIDs;
    NSMutableArray * _delegates;
    bool  _hasPrefsAccess;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _notifyToken;
}

@property (nonatomic, readonly) NSArray *allLearningDisabledBundleIDs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allLearningDisabledBundleIDs;
- (bool)isLearningDisabledForBundleID:(id)arg1;
- (void)startSanitizingInteractionStore:(id)arg1;
- (void)startSanitizingKnowledgeStore:(id)arg1;
- (void)stopSanitizing;

@end

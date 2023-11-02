
@interface IMGroupBlocklistManager : NSObject {
    NSDate * _lastModifiedDate;
}

@property (retain) NSDate *lastModifiedDate;

+ (id)groupsBlocklistFilename;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateLastModifiedDate:(id)arg1;
- (void)blocklistGroupId:(id)arg1;
- (bool)hasFileChanged;
- (id)init;
- (id)initFromFile:(id)arg1;
- (bool)isFeatureDisabled;
- (bool)isGroupInBlocklist:(id)arg1;
- (id)lastModifiedDate;
- (void)loadData;
- (void)loadFromFile:(id)arg1;
- (void)reloadIfNeeded;
- (void)save;
- (void)setLastModifiedDate:(id)arg1;

@end

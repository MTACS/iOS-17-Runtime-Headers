
@interface PBFDataStoreUnarchiver : NSObject {
    NSURL * _archivedDataStoreURL;
    PRSDataStoreArchiveConfiguration * _options;
    bool  _remapFocusConfigurations;
}

@property (nonatomic, readonly, copy) NSURL *archivedDataStoreURL;
@property (nonatomic) PRSDataStoreArchiveConfiguration *options;
@property (nonatomic) bool remapFocusConfigurations;

+ (id)fileManager;
+ (bool)unarchiveDataStoreAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (id)_activityForIdentifier:(id)arg1;
- (id)_availableActivities;
- (bool)_focusActivityExistsForUUID:(id)arg1;
- (id)archivedDataStoreURL;
- (id)initWithArchivedDataStoreURL:(id)arg1;
- (id)options;
- (bool)remapFocusConfigurations;
- (void)setOptions:(id)arg1;
- (void)setRemapFocusConfigurations:(bool)arg1;
- (bool)unarchiveToDirectoryAtURL:(id)arg1 error:(out id*)arg2;

@end

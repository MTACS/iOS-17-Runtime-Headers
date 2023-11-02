
@interface STUnique : NSObject {
    NSPersistentHistoryToken * _migratedToken;
    <STPersistenceControllerProtocol> * _persistenceController;
}

@property (nonatomic, retain) <STPersistenceControllerProtocol> *persistenceController;

+ (Class)_internalClassForSerializableClassName:(id)arg1;
+ (bool)_updateScreenTimeSettingsForAppAndWebsiteActivityEnabled:(bool)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (void).cxx_destruct;
- (bool)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4;
- (bool)areLocalChangesInterestingWithError:(id*)arg1;
- (id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2;
- (id)initWithPersistenceController:(id)arg1;
- (bool)migrateWithError:(id*)arg1;
- (bool)migrateWithExportNeeded:(bool*)arg1 error:(id*)arg2;
- (void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2;
- (id)persistenceController;
- (void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2;
- (void)setPersistenceController:(id)arg1;

@end

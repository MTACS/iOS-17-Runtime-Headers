
@protocol DMCRFSnapshotSource <NSObject>

@required

- (<DMCRFSnapshotSourceDelegate> *)delegate;
- (void)fetchAppBundleIDsForSnapshot:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <DMCRFSnapshotIdentifier> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)fetchRestorableSnapshotsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)personaIdentifier;
- (void)setDelegate:(id <DMCRFSnapshotSourceDelegate>)arg1;
- (void)setPersonaIdentifier:(NSString *)arg1;
- (bool)startRestoreForSnapshot:(void *)arg1 excludingAppBundleIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <DMCRFSnapshotIdentifier> *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

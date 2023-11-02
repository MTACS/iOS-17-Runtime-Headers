
@interface CRKASMCredentialManifest : NSObject {
    CRKAnnotatedCredentialManifest * _annotatedManifest;
    NSMutableDictionary * _entriesByPersistentID;
}

@property (nonatomic, readonly) CRKAnnotatedCredentialManifest *annotatedManifest;
@property (nonatomic, readonly) NSMutableDictionary *entriesByPersistentID;
@property (nonatomic, readonly, copy) NSSet *persistentIDs;

- (void).cxx_destruct;
- (id)annotatedManifest;
- (id)entriesByPersistentID;
- (id)entryForPersistentID:(id)arg1;
- (id)initWithAnnotatedManifest:(id)arg1;
- (id)makeEntryForPersistentID:(id)arg1;
- (id)persistentIDs;

@end

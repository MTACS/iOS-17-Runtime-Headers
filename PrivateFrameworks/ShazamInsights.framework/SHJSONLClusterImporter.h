
@interface SHJSONLClusterImporter : NSObject <SHClusterImporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)createTables:(struct sqlite3 { }*)arg1 error:(id*)arg2;
- (bool)insert:(struct sqlite3 { }*)arg1 appleMusicID:(id)arg2 cohesionID:(long long)arg3;
- (long long)insert:(struct sqlite3 { }*)arg1 low:(int)arg2 medium:(int)arg3 high:(int)arg4;
- (bool)loadDataFromFileInfo:(id)arg1 withMetadata:(id)arg2 toDestinationURL:(id)arg3 error:(id*)arg4;

@end

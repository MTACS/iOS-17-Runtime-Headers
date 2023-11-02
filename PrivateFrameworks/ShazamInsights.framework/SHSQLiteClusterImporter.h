
@interface SHSQLiteClusterImporter : NSObject <SHClusterImporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)loadDataFromFileInfo:(id)arg1 withMetadata:(id)arg2 toDestinationURL:(id)arg3 error:(id*)arg4;

@end

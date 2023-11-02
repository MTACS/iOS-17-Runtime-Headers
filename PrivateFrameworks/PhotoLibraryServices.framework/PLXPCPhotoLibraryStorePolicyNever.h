
@interface PLXPCPhotoLibraryStorePolicyNever : NSObject <PLXPCPhotoLibraryStorePolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)shouldUseXPCStoreForDatabasePath:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;

@end

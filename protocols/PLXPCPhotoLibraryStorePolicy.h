
@protocol PLXPCPhotoLibraryStorePolicy <NSObject>

@required

- (bool)shouldUseXPCStoreForDatabasePath:(NSString *)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;

@end

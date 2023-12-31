
@protocol AVTStoreBackend <NSObject>

@required

- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id*)arg2;
- (<AVTStoreBackendDelegate> *)backendDelegate;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (bool)deleteAvatarWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (AVTAvatarRecord *)duplicateAvatarRecord:(AVTAvatarRecord *)arg1 error:(id*)arg2;
- (<AVTAvatarRecordChangeTracker> *)recordChangeTracker;
- (bool)saveAvatar:(AVTAvatarRecord *)arg1 error:(id*)arg2;
- (bool)saveAvatars:(NSArray *)arg1 error:(id*)arg2;
- (void)setBackendDelegate:(id <AVTStoreBackendDelegate>)arg1;

@end

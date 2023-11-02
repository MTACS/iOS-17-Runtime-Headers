
@protocol HMDCameraBulletinBoard <NSObject>

@required

- (void)insertCameraClipSignificantEventBulletin:(HMDCameraClipSignificantEventBulletin *)arg1;
- (void)insertImageBulletinsForChangedCharacteristics:(void *)arg1 snapshotData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removeBulletinWithRecordID:(NSString *)arg1;
- (void)removeCameraClipBulletinsForCameraProfile:(HMDCameraProfile *)arg1;
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDCameraClipSignificantEventBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)updateBulletinWithRecordID:(NSString *)arg1 forChangedCharacteristics:(NSArray *)arg2 snapshotData:(NSDictionary *)arg3;

@end

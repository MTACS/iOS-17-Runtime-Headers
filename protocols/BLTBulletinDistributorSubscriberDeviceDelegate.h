
@protocol BLTBulletinDistributorSubscriberDeviceDelegate <NSObject>

@required

- (void)getWillNanoPresentNotificationForSectionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getWillNanoPresentNotificationForSectionID:(void *)arg1 subsectionIDs:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isLocallyConnectedToRemote;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;

@end

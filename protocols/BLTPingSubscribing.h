
@protocol BLTPingSubscribing <NSObject>

@required

- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithBulletin:(void *)arg1 ack:(void *)arg2; // needs 2 arg types, found 7: BBBulletin *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
- (void)pingWithRecordID:(void *)arg1 forSectionID:(void *)arg2 ack:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (NSSet *)sectionIDs;
- (NSSet *)sectionIDsForBulletins;
- (NSArray *)subscriptionInfos;

@end

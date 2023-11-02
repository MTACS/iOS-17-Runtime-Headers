
@protocol BBRemoteDataProviderClientProxy <NSObject>

@required

- (void)bulletinsWithRequestParameters:(void *)arg1 lastCleared:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BBBulletinRequestParameters *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)clearedInfoForBulletins:(void *)arg1 lastClearedInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: BBSectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)clearedInfoForClearingBulletinsFromDate:(void *)arg1 toDate:(void *)arg2 lastClearedInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSDate *, BBSectionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)dataProviderDidLoad;
- (void)deliverBulletinActionResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BBActionResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deliverMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;

@end

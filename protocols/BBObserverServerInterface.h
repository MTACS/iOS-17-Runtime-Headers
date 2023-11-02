
@protocol BBObserverServerInterface

@required

- (void)clearBulletinIDs:(NSSet *)arg1 inSection:(NSString *)arg2;
- (void)clearBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 inSections:(NSSet *)arg3;
- (void)clearSection:(NSString *)arg1;
- (void)finishedWithBulletinID:(NSString *)arg1 transactionID:(unsigned long long)arg2;
- (void)getBulletinsForPublisherMatchIDs:(void *)arg1 sectionID:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getBulletinsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSectionInfoForActiveSectionsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionInfoForSectionIDs:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionInfoWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionParametersForSectionID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BBSectionParameters *, NSError *, void*
- (void)getUniversalSectionIDForSectionID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)handleResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: BBResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, BBResponse *, void*
- (void)removeBulletins:(NSSet *)arg1 inSection:(NSString *)arg2 fromFeeds:(unsigned long long)arg3;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(NSString *)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(NSString *)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(NSString *)arg2;

@end

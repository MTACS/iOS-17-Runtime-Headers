
@protocol WBSContentBlockerStatisticsStore <NSObject>

@required

- (void)blockedThirdPartiesAfter:(void *)arg1 before:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)blockedThirdPartiesAfter:(void *)arg1 before:(void *)arg2 onFirstParty:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSDate *, NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)clearAllStatisticsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clearStatisticsAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)clearStatisticsForDomains:(NSArray *)arg1;
- (void)recordThirdPartyResourceBlocked:(void *)arg1 onFirstParty:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

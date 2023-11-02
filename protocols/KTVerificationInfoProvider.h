
@protocol KTVerificationInfoProvider

@required

- (NSString *)applicationIdentifier;
- (void)fetchPeerVerificationInfos:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchSelfVerificationInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, KTSelfVerificationInfo *, NSError *, void*
- (void)healSelf:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: KTSelfVerificationHealableErrors *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

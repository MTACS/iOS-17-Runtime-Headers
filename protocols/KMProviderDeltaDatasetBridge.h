
@protocol KMProviderDeltaDatasetBridge <KMProviderDatasetBridge>

@required

- (void)changesAccepted;
- (bool)enumerateDeltaItemsWithError:(void *)arg1 addOrUpdateBlock:(void *)arg2 removeBlock:(void *)arg3; // needs 3 arg types, found 13: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, KVItem *, void*, id /* block */, void*, bool, id /* block */, NSString *, void*
- (bool)isDeltaEligible;
- (NSDate *)lastChangesAccepted;
- (void)recordDonationAttempt;
- (void)resetDeltaState;
- (NSString *)validity;
- (unsigned long long)version;

@end

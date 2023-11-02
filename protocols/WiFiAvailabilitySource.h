
@protocol WiFiAvailabilitySource <NSObject>

@required

- (id /* block */)changeHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSSet *, NSSet *, void*, id, SEL
- (id /* block */)relevancyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSSet *, NSSet *, void*, id, SEL
- (NSSet *)relevantNetworks;
- (void)setChangeHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, void*
- (void)setRelevancyHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, void*

@optional

- (NSSet *)candidateNetworks;
- (void)fetchCandidateNetworksMatchingBSSIDs:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end

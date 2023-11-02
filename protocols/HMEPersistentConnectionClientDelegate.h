
@protocol HMEPersistentConnectionClientDelegate <HMERouterClientDelegate>

@required

- (void)finishedWritingToStore:(unsigned long long)arg1;
- (NSSet *)forwardingTopicsForTopics:(NSSet *)arg1;
- (bool)isActiveForSaving;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(void *)arg1 removedFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (unsigned long long)willWriteToStore;

@end

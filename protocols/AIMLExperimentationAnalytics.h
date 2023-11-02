
@protocol AIMLExperimentationAnalytics

@required

- (void)cacheTrialExperimentsForCodePathID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cacheTrialExperimentsIdentifiersForCodePathID:(void *)arg1 namespaces:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)emitTriggerForCodePathID:(void *)arg1 requestID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)emitTriggerFromCacheForCodePathID:(void *)arg1 requestID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

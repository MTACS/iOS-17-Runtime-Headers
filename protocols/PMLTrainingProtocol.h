
@protocol PMLTrainingProtocol <NSObject>

@required

- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 sessionDescriptor:(PMLSessionDescriptor *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(bool)arg5;
- (void)deleteSessionsWithBundleID:(NSString *)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSessionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (NSDictionary *)planReceivedWithPayload:(NSData *)arg1 error:(id*)arg2;
- (NSDictionary *)planReceivedWithRecipe:(NSDictionary *)arg1 attachments:(NSArray *)arg2 error:(id*)arg3;
- (void)trimDbWithDeferralBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*

@end


@protocol DTApplicationListingServiceRequests <DTXAllowedRPC>

@required

- (NSArray *)installedApplicationsMatching:(NSDictionary *)arg1 registerUpdateToken:(NSString *)arg2;
- (void)unregisterUpdateToken:(NSString *)arg1;

@end

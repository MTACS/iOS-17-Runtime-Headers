
@protocol ATXStableContactRepresentationProviderProtocol

@required

- (NSDictionary *)refreshCnContactIdsGivenContactEntities:(NSDictionary *)arg1;
- (ATXStableContactRepresentation *)stableContactRepresentationForCnContactId:(NSString *)arg1 rawIdentifier:(NSString *)arg2;
- (ATXStableContactRepresentation *)stableContactRepresentationForStableContactIdentifier:(NSString *)arg1;

@end

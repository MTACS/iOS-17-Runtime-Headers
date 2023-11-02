
@protocol WBSSavedAccountSidecar <NSObject, NSCopying>

@required

- (NSDictionary *)dictionaryRepresentation;
- (id)initWithUser:(NSString *)arg1 protectionSpace:(NSURLProtectionSpace *)arg2 dictionaryRepresentation:(NSDictionary *)arg3;
- (NSString *)notesEntry;
- (NSString *)originalContributorParticipantID;
- (NSString *)participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
- (NSURLProtectionSpace *)protectionSpace;
- (WBSTOTPGenerator *)totpGenerator;
- (NSString *)user;

@end

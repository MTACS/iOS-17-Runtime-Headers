
@protocol WBSSavedAccountSidecarInternal <WBSSavedAccountSidecar>

@required

- (NSString *)notesEntry;
- (NSString *)originalContributorParticipantID;
- (NSString *)participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
- (NSDictionary *)prefixedSharableData;
- (void)setNotesEntry:(NSString *)arg1;
- (void)setOriginalContributorParticipantID:(NSString *)arg1;
- (void)setParticipantIDForUserThatMovedSavedAccountToRecentlyDeleted:(NSString *)arg1;
- (void)setTotpGenerator:(WBSTOTPGenerator *)arg1;
- (void)setUser:(NSString *)arg1;
- (WBSTOTPGenerator *)totpGenerator;
- (NSString *)user;

@end

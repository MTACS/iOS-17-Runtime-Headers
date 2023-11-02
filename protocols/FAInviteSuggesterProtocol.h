
@protocol FAInviteSuggesterProtocol <NSObject>

@required

- (NSArray *)fetchFamilyMemberSuggestions;
- (long long)fetchSuggestedInviteTransportForContactId:(NSString *)arg1 contactHandles:(NSArray *)arg2;

@end

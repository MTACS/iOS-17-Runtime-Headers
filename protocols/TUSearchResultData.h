
@protocol TUSearchResultData <NSObject>

@required

- (CNContact *)backingContact;
- (NSString *)backingContactId;
- (NSString *)backingContactIdentifier;
- (NSString *)callerId;
- (NSString *)destinationId;
- (NSString *)displayName;
- (NSArray *)handles;
- (NSString *)isoCountryCode;
- (long long)mostRecentCallType;
- (bool)mostRecentCallWasMissed;

@end


@interface WBSSavedAccountSharedSidecar : NSObject <NSCopying, WBSSavedAccountSidecar, WBSSavedAccountSidecarInternal> {
    NSString * _notesEntry;
    NSString * _originalContributorParticipantID;
    NSDictionary * _originalKeychainDictionary;
    NSString * _participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
    NSURLProtectionSpace * _protectionSpace;
    WBSTOTPGenerator * _totpGenerator;
    NSString * _user;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notesEntry;
@property (nonatomic, copy) NSString *originalContributorParticipantID;
@property (nonatomic, retain) NSDictionary *originalKeychainDictionary;
@property (nonatomic, copy) NSString *participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
@property (nonatomic, readonly) NSDictionary *prefixedSharableData;
@property (nonatomic, readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly) Class superclass;
@property (nonatomic, retain) WBSTOTPGenerator *totpGenerator;
@property (nonatomic, copy) NSString *user;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithPersonalSidecar:(id)arg1;
- (id)initWithUser:(id)arg1 protectionSpace:(id)arg2 dictionaryRepresentation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)notesEntry;
- (id)originalContributorParticipantID;
- (id)originalKeychainDictionary;
- (id)participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
- (id)prefixedSharableData;
- (id)protectionSpace;
- (void)setNotesEntry:(id)arg1;
- (void)setOriginalContributorParticipantID:(id)arg1;
- (void)setOriginalKeychainDictionary:(id)arg1;
- (void)setParticipantIDForUserThatMovedSavedAccountToRecentlyDeleted:(id)arg1;
- (void)setTotpGenerator:(id)arg1;
- (void)setUser:(id)arg1;
- (id)totpGenerator;
- (id)user;

@end

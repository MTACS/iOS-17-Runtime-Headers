
@interface WBSSavedAccountSidecar : NSObject <NSCopying, WBSSavedAccountSidecar, WBSSavedAccountSidecarInternal> {
    NSMutableDictionary * _contextSpecificData;
    NSString * _customTitle;
    WBSPasswordWarningHideMarker * _hideWarningMarker;
    NSDate * _lastOneTimeShareDateForPasskey;
    NSDate * _lastRecentlyDeletedNotificationDate;
    NSString * _notesEntry;
    NSString * _originalContributorParticipantID;
    NSDictionary * _originalKeychainDictionary;
    NSString * _participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
    NSURLProtectionSpace * _protectionSpace;
    WBSTOTPGenerator * _totpGenerator;
    NSString * _user;
}

@property (nonatomic, readonly) NSDictionary *contextSpecificData;
@property (nonatomic, copy) NSString *customTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (nonatomic, copy) NSDate *lastOneTimeShareDateForPasskey;
@property (nonatomic, retain) NSDate *lastRecentlyDeletedNotificationDate;
@property (nonatomic, copy) NSString *notesEntry;
@property (nonatomic, copy) NSString *originalContributorParticipantID;
@property (nonatomic, copy) NSString *participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
@property (nonatomic, readonly) NSDictionary *prefixedSharableData;
@property (nonatomic, readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly) Class superclass;
@property (nonatomic, retain) WBSTOTPGenerator *totpGenerator;
@property (nonatomic, copy) NSString *user;

- (void).cxx_destruct;
- (void)adoptSharableDataFromSharedSidecar:(id)arg1;
- (id)contextSpecificData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customTitle;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hideWarningMarker;
- (id)initWithSharedSidecar:(id)arg1;
- (id)initWithUser:(id)arg1 protectionSpace:(id)arg2;
- (id)initWithUser:(id)arg1 protectionSpace:(id)arg2 dictionaryRepresentation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastOneTimeShareDateForPasskey;
- (id)lastRecentlyDeletedNotificationDate;
- (id)lastUsedDateForContext:(id)arg1;
- (id)notesEntry;
- (id)originalContributorParticipantID;
- (id)participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
- (id)prefixedSharableData;
- (id)protectionSpace;
- (void)removeSharableData;
- (void)setCustomTitle:(id)arg1;
- (void)setHideWarningMarker:(id)arg1;
- (void)setLastOneTimeShareDateForPasskey:(id)arg1;
- (void)setLastRecentlyDeletedNotificationDate:(id)arg1;
- (void)setLastUsedDate:(id)arg1 forContext:(id)arg2;
- (void)setNotesEntry:(id)arg1;
- (void)setOriginalContributorParticipantID:(id)arg1;
- (void)setParticipantIDForUserThatMovedSavedAccountToRecentlyDeleted:(id)arg1;
- (void)setTotpGenerator:(id)arg1;
- (void)setUser:(id)arg1;
- (id)totpGenerator;
- (id)user;

@end

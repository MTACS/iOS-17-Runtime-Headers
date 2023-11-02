
@interface CPLLibraryShareScopeChange : CPLScopeChange <NSCopying, NSSecureCoding> {
    long long  _exitRetentionPolicy;
    long long  _exitSource;
    long long  _exitType;
    NSSet * _exitingUserIdentifiers;
    NSData * _userDefinedRules;
    NSDate * _userViewedParticipantTrashNotificationDate;
}

@property (nonatomic) long long exitRetentionPolicy;
@property (nonatomic) long long exitSource;
@property (nonatomic, readonly) long long exitState;
@property (nonatomic) long long exitType;
@property (nonatomic, copy) NSArray *exitingUserIdentifiers;
@property (nonatomic, copy) NSData *userDefinedRules;
@property (nonatomic, copy) NSDate *userViewedParticipantTrashNotificationDate;

+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (id)descriptionForExitState:(long long)arg1;
+ (id)descriptionForExitType:(long long)arg1;
+ (id)mappingForExitState;
+ (id)mappingForExitType;
+ (bool)serverSupportsLibraryShareSettingsRecordSyncing;
+ (bool)serverSupportsLibraryShareSettingsUserViewedParticipantTrashNotificationDateSyncing;

- (void).cxx_destruct;
- (id)_additionalDescription;
- (void)addExitingUserIdentifiers:(id)arg1;
- (bool)areSomeUsersExiting;
- (long long)exitRetentionPolicy;
- (long long)exitSource;
- (long long)exitState;
- (long long)exitType;
- (id)exitingUserIdentifiers;
- (bool)isCurrentUserExiting;
- (bool)isUserWithIdentifierExiting:(id)arg1;
- (void)removePendingParticipantIDs:(id)arg1;
- (void)setExitRetentionPolicy:(long long)arg1;
- (void)setExitSource:(long long)arg1;
- (void)setExitType:(long long)arg1;
- (void)setExitingUserIdentifiers:(id)arg1;
- (void)setUserDefinedRules:(id)arg1;
- (void)setUserViewedParticipantTrashNotificationDate:(id)arg1;
- (bool)shouldAlwaysUpdateScopeInfoWhenPossible;
- (void)updateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(bool*)arg3;
- (id)userDefinedRules;
- (id)userViewedParticipantTrashNotificationDate;

@end

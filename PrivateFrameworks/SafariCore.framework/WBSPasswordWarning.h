
@interface WBSPasswordWarning : NSObject {
    NSArray * _domainsWithReusedPassword;
    unsigned long long  _issueTypes;
    WBSSavedAccount * _savedAccount;
    unsigned long long  _severityScore;
    WBSPasswordEvaluation * _weakPasswordEvaluation;
}

@property (nonatomic, readonly) bool hasBeenHidden;
@property (nonatomic, readonly) unsigned long long hashForUserAcknowlegement;
@property (nonatomic, readonly) unsigned long long issueTypes;
@property (nonatomic, readonly) NSString *localizedAlertWarningForSharingReusedPassword;
@property (nonatomic, readonly) NSString *localizedInformationTextForWarningWhenLoggingIn;
@property (nonatomic, readonly) NSString *localizedShortDescriptionOfProblemType;
@property (nonatomic, readonly) NSString *localizedShortDescriptivePhrase;
@property (nonatomic, readonly) WBSSavedAccount *savedAccount;
@property (nonatomic, readonly) unsigned long long severity;
@property (nonatomic) unsigned long long severityScore;
@property (nonatomic, readonly) bool shouldShowWarningsWhenLoggingIn;

- (void).cxx_destruct;
- (id)_localizedLongWarningStringsForClient:(unsigned long long)arg1;
- (id)_localizedShortDescriptionWithFullDescriptivePhrase:(bool)arg1;
- (unsigned long long)_passwordVisibilityForClient:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (bool)hasBeenHidden;
- (unsigned long long)hash;
- (unsigned long long)hashForUserAcknowlegement;
- (id)initWithSavedAccount:(id)arg1 issueTypes:(unsigned long long)arg2 weakPasswordEvaluation:(id)arg3 domainsWithReusedPassword:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)issueTypes;
- (id)localizedAlertWarningForSharingReusedPassword;
- (id)localizedInformationTextForWarningWhenLoggingIn;
- (id)localizedLongDescriptionForClient:(unsigned long long)arg1;
- (id)localizedShortDescriptionOfProblemType;
- (id)localizedShortDescriptivePhrase;
- (id)savedAccount;
- (void)setSeverityScore:(unsigned long long)arg1;
- (unsigned long long)severity;
- (unsigned long long)severityScore;
- (bool)shouldShowWarningsWhenLoggingIn;

@end

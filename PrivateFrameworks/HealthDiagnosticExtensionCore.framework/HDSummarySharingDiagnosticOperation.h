
@interface HDSummarySharingDiagnosticOperation : HDDiagnosticOperation

- (void)_reportDiagnosticsForProfileIdentifier:(id)arg1;
- (void)_reportHeaderWithProfileIdentifiers:(id)arg1;
- (void)_reportInvitationsForPrimaryProfile;
- (void)_reportProfileInformationForProfileIdentifier:(id)arg1;
- (void)_reportSharedSummariesForProfileIdentifier:(id)arg1;
- (id)reportFilename;
- (void)run;

@end

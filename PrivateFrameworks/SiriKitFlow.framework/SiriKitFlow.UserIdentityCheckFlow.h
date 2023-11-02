
@interface SiriKitFlow.UserIdentityCheckFlow : _TtCs12_SwiftObject {
    void _currentRequestID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentState;
    void disambiguator;
    void exitValue;
    void hasCheckedSpeechProfile;
    void hasForcedDisambiguation;
    void hasInteractedWithUser;
    void hasLoggedForcedDisambiguationResult;
    void hasResubmittedOriginalRequest;
    void inputs;
    void originalRequestID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  originalUser;
    void outputPublisher;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  proposedUser;
    void runConfirmIdentityCount;
    void runRequestIdentityCount;
    void speechProfileCheckFailed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  strategy;
}

@end


@interface WBSCertificateBypassManager : NSObject {
    NSMutableDictionary * _bypassedHostsToCertificateExceptions;
    NSMutableDictionary * _bypassedHostsToCertificateExceptionsInPrivateBrowsing;
    WBSCoalescedAsynchronousWriter * _plistWriter;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearBypassesInRelationToDate:(id)arg1 comparison:(long long)arg2;
- (bool)_didCertificatExceptionsApplySuccessfully:(id)arg1 protectionSpace:(id)arg2;
- (id)_hostAndPortForProtectionSpace:(id)arg1;
- (id)_readStateFromStorage;
- (void)clearCertificateBypassesCreatedAfterDate:(id)arg1;
- (void)clearCertificateBypassesCreatedBeforeDate:(id)arg1;
- (void)clearCertificateBypassesForHostIfNecessary:(id)arg1 withTrust:(struct __SecTrust { }*)arg2;
- (bool)didInvalidCertificateExceptionsApplySuccessfullyForProtectionSpace:(id)arg1 inPrivateBrowsing:(bool)arg2;
- (id)init;
- (void)rememberCertificateBypassForProtectionSpace:(id)arg1 inPrivateBrowsing:(bool)arg2;
- (void)savePendingChangesBeforeTermination;

@end

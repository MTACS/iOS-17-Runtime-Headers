
@interface BLTAlertStateTester : NSObject {
    id /* block */  _sectionInfoRetriever;
    bool  _testCheckedSubsections;
}

@property (nonatomic, copy) id /* block */ sectionInfoRetriever;
@property bool testCheckedSubsections;

- (void).cxx_destruct;
- (unsigned long long)_blockingReasonForSectionInfo:(id)arg1 isCritical:(bool)arg2;
- (bool)isScreenTimeBlockedForBundleIdentifier:(id)arg1 ignoresDowntime:(bool)arg2;
- (id /* block */)sectionInfoRetriever;
- (void)setSectionInfoRetriever:(id /* block */)arg1;
- (void)setTestCheckedSubsections:(bool)arg1;
- (bool)testCheckedSubsections;
- (unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(bool)arg3 hasSectionIDOptedOutOfCoordination:(bool)arg4 hasSectionIDOptedForwardOnly:(bool)arg5 ignoresDowntime:(bool)arg6 isCritical:(bool)arg7;

@end

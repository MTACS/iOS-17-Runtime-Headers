
@interface EDCategorySubsystem : NSObject {
    EDBiomeInteractionEventLog * _biomeLog;
    EDDifferentialPrivacyReporter * _differentialPrivacyReporter;
    EDInteractionLogger * _interactionLogger;
    EDPETInteractionEventLog * _petLog;
}

@property (nonatomic, readonly) EDBiomeInteractionEventLog *biomeLog;
@property (nonatomic, readonly) EDDifferentialPrivacyReporter *differentialPrivacyReporter;
@property (nonatomic, readonly) EDInteractionLogger *interactionLogger;
@property (nonatomic, readonly) EDPETInteractionEventLog *petLog;

- (void).cxx_destruct;
- (void)_schedulePETSubmissionActivityForLog:(id)arg1;
- (id)biomeLog;
- (id)differentialPrivacyReporter;
- (id)initWithPersistence:(id)arg1 userProfileProvider:(id)arg2 vipManager:(id)arg3 sourceApplicationBundleIdentifier:(id)arg4;
- (id)interactionLogger;
- (id)petLog;
- (void)scheduleRecurringActivity;

@end

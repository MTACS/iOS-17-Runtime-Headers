
@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)actionVerbOptional;
- (id)baseModelName;
- (bool)confirmationOptional;
- (id)init;
- (id)messagesBannerLimit;
- (id)reminderEnrichments;
- (id)reminderInputMapping;
- (id)reminderOutputMapping;
- (id)reminderOverrides;
- (bool)triggerOptional;
- (void)updateFactors;

@end

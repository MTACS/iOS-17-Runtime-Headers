
@interface SGReminderTrialClientWrapperGuardedData : NSObject {
    bool  _actionVerbOptional;
    bool  _confirmationOptional;
    NSNumber * _messagesBannerLimit;
    NSDictionary * _reminderEnrichments;
    NSDictionary * _reminderInputMapping;
    NSDictionary * _reminderOutputMapping;
    NSDictionary * _reminderOverrides;
    bool  _triggerOptional;
}

- (void).cxx_destruct;

@end

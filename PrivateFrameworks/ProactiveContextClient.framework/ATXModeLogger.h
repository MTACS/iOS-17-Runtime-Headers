
@interface ATXModeLogger : NSObject {
    NSUserDefaults * _defaults;
    ATXModeDuetHelper * _duetHelper;
    NSDateFormatter * _formatter;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shareDiagnosticDataWrapper;
}

@property bool shareDiagnosticDataWrapper;

- (void).cxx_destruct;
- (id)_lastSubmissionDate;
- (void)_updateLastSubmissionDate:(id)arg1;
- (id)_userDefaults;
- (id)_userID;
- (id)initWithDuetHelper:(id)arg1;
- (void)logEventsFromModeStream;
- (void)setShareDiagnosticDataWrapper:(bool)arg1;
- (bool)shareDiagnosticDataWrapper;
- (id)stringForDate:(id)arg1;

@end

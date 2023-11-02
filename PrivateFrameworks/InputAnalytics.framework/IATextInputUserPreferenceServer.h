
@interface IATextInputUserPreferenceServer : NSObject {
    id /* block */  _eventHandler;
    bool  _readyToReportPreferenceToEventHandler;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic) bool readyToReportPreferenceToEventHandler;

- (void).cxx_destruct;
- (void)dispatchUserPreference:(long long)arg1 withValue:(long long)arg2;
- (id /* block */)eventHandler;
- (id)initWithEventHandler:(id /* block */)arg1;
- (bool)readyToReportPreferenceToEventHandler;
- (long long)reportAutocorrectionEnablement;
- (void)reportStateForUserPreference:(long long)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadyToReportPreferenceToEventHandler:(bool)arg1;

@end

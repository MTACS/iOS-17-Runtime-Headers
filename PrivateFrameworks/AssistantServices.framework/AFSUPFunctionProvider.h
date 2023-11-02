
@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _timeFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldAutomaticallyProvideFunctions;

- (void).cxx_destruct;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_contextDeviceName:(id)arg1;
- (id)_contextRoomName:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)_deviceModel;
- (id)_lowercaseString:(id)arg1;
- (id)_meCard;
- (id)_meCardIdentifier:(id)arg1;
- (id)_peerInfoForContextIdentifier:(id)arg1;
- (id)_siriUsageDescription:(id)arg1;
- (id)_speechRecognitionUsageDescription:(id)arg1;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_userFirstName:(id)arg1;
- (id)_userFullName:(id)arg1;
- (id)_userLastName:(id)arg1;
- (id)_userMiddleName:(id)arg1;
- (id)_userNickName:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)stringForExpression:(id)arg1;
- (id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(bool*)arg2;

@end

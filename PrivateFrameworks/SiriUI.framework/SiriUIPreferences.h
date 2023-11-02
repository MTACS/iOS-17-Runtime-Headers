
@interface SiriUIPreferences : NSObject {
    long long  _numberOfTimesSiriCardShown;
    NSDate * _previousSiriRequestErrorTimestamp;
    long long  _siriRequestErrorCount;
    NSUserDefaults * _userDefaults;
    bool  _voiceRequestMadeWhileInCarDND;
}

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)init;
- (long long)integerForKey:(id)arg1;
- (long long)numberOfTimesCarDNDSiriCardShown;
- (id)objectForKey:(id)arg1;
- (id)previousSiriRequestErrorTimestamp;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPreviousSiriRequestErrorTimestamp:(id)arg1;
- (void)setSiriRequestErrorCount:(long long)arg1;
- (void)setVoiceRequestMadeWhileInCarDND:(bool)arg1;
- (long long)siriRequestErrorCount;
- (bool)voiceRequestMadeWhileInCarDND;

@end

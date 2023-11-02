
@interface ICMusicAccountNotificationsSettingsResponse : NSObject {
    NSDictionary * _responseDictionary;
    bool  _wasSuccessful;
}

@property (nonatomic, readonly) NSArray *settingsSwitches;
@property (nonatomic, readonly) bool wasSuccessful;

+ (id)createResponseBodyWithSwitches:(id)arg1;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)settingsSwitches;
- (bool)wasSuccessful;

@end

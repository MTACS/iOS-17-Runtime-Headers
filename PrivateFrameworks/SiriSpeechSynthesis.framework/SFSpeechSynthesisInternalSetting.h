
@interface SFSpeechSynthesisInternalSetting : NSObject {
    NSUserDefaults * _defaults;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) bool disableCaching;
@property (nonatomic, readonly) NSString *ospreyEndpointURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)defaults;
- (id)deviceId;
- (bool)disableCaching;
- (id)init;
- (id)ospreyEndpointURL;
- (id)ospreyEndpointURLByType:(long long)arg1;
- (void)setDefaults:(id)arg1;

@end

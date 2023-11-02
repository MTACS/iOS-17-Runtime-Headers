
@interface SSRSpeakerRecognitionModelContext : NSObject {
    NSURL * _configFilePath;
    NSDictionary * _voiceProfilesModelFilePaths;
}

@property (nonatomic, readonly) NSURL *configFilePath;
@property (nonatomic, readonly) NSDictionary *voiceProfilesModelFilePaths;

- (void).cxx_destruct;
- (id)configFilePath;
- (id)initWithConfigFilePath:(id)arg1 withModelFilePaths:(id)arg2;
- (id)voiceProfilesModelFilePaths;

@end

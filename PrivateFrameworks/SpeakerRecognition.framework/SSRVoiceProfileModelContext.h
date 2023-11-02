
@interface SSRVoiceProfileModelContext : NSObject {
    NSDictionary * _compareModelFilePaths;
    NSURL * _configFilePath;
    NSURL * _voiceProfileModelFilePath;
}

@property (nonatomic, readonly) NSDictionary *compareModelFilePaths;
@property (nonatomic, readonly) NSURL *configFilePath;
@property (nonatomic, readonly) NSURL *voiceProfileModelFilePath;

- (void).cxx_destruct;
- (id)compareModelFilePaths;
- (id)configFilePath;
- (id)initWithConfigFilePath:(id)arg1 withModelPath:(id)arg2 withCompareModelFilePaths:(id)arg3;
- (id)voiceProfileModelFilePath;

@end

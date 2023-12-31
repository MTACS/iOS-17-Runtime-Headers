
@interface TVPAudioSession : NSObject {
    id /* block */  _configurationBlock;
}

@property (nonatomic, copy) id /* block */ configurationBlock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_mediaServicesReset:(id)arg1;
- (void)_updateIfNecessary;
- (id /* block */)configurationBlock;
- (void)dealloc;
- (id)init;
- (void)setConfigurationBlock:(id /* block */)arg1;

@end

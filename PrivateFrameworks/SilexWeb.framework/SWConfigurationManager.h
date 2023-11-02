
@interface SWConfigurationManager : NSObject <SWConfigurationManager> {
    SWConfiguration * _configuration;
    <SWScript> * _configurationScript;
    <SWLogger> * _logger;
    <SWConfigurationSerializer> * _serializer;
    <SWScriptsManager> * _webContentScriptsManager;
}

@property (nonatomic, copy) SWConfiguration *configuration;
@property (nonatomic, retain) <SWScript> *configurationScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) <SWConfigurationSerializer> *serializer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SWScriptsManager> *webContentScriptsManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationScript;
- (id)initWithWebContentScriptsManager:(id)arg1 logger:(id)arg2 serializer:(id)arg3;
- (id)logger;
- (id)serializer;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationScript:(id)arg1;
- (id)webContentScriptsManager;

@end

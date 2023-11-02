
@interface _AFExperimentServerConfigurationInfoMutation : NSObject <AFExperimentServerConfigurationInfoMutating> {
    AFExperimentServerConfigurationInfo * _base;
    NSString * _configurationIdentifier;
    NSURL * _configurationURL;
    double  _maxTimeToSync;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasConfigurationIdentifier : 1; 
        unsigned int hasConfigurationURL : 1; 
        unsigned int hasMaxTimeToSync : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigurationIdentifier;
- (id)getConfigurationURL;
- (double)getMaxTimeToSync;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setConfigurationURL:(id)arg1;
- (void)setMaxTimeToSync:(double)arg1;

@end

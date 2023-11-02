
@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {
    AFExperimentContext * _base;
    NSDictionary * _experimentsByConfigurationIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasExperimentsByConfigurationIdentifier : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getExperimentsByConfigurationIdentifier;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setExperimentsByConfigurationIdentifier:(id)arg1;

@end

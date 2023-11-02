
@interface _SVXDeviceSetupFlowMutation : NSObject <SVXDeviceSetupFlowMutating> {
    SVXDeviceSetupFlow * _baseModel;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasScenes : 1; 
    }  _mutationFlags;
    NSArray * _scenes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScenes:(id)arg1;

@end

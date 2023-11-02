
@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating> {
    SVXDeviceSetupFlowScene * _baseModel;
    NSArray * _displayKeyFrames;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSceneID : 1; 
        unsigned int hasDisplayKeyFrames : 1; 
    }  _mutationFlags;
    long long  _sceneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setDisplayKeyFrames:(id)arg1;
- (void)setSceneID:(long long)arg1;

@end


@interface _SVXDeviceSetupContextMutation : NSObject <SVXDeviceSetupContextMutating> {
    SVXDeviceSetupContext * _baseModel;
    NSDate * _beginDate;
    NSDate * _endDate;
    SVXDeviceSetupFlowScene * _flowScene;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasOptions : 1; 
        unsigned int hasFlowScene : 1; 
        unsigned int hasBeginDate : 1; 
        unsigned int hasEndDate : 1; 
    }  _mutationFlags;
    SVXDeviceSetupOptions * _options;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setBeginDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFlowScene:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;

@end

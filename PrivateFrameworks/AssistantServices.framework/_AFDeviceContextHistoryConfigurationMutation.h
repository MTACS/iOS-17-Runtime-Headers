
@interface _AFDeviceContextHistoryConfigurationMutation : NSObject <AFDeviceContextHistoryConfigurationMutating> {
    AFDeviceContextHistoryConfiguration * _base;
    unsigned long long  _historyBufferSize;
    bool  _keepsHistory;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasKeepsHistory : 1; 
        unsigned int hasHistoryBufferSize : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getHistoryBufferSize;
- (bool)getKeepsHistory;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setHistoryBufferSize:(unsigned long long)arg1;
- (void)setKeepsHistory:(bool)arg1;

@end

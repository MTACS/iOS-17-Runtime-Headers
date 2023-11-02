
@interface _AFRequestHandlingContextMutation : NSObject <AFRequestHandlingContextMutating> {
    AFRequestHandlingContext * _base;
    NSString * _inputAssistantID;
    NSString * _inputDeviceID;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasRequestID : 1; 
        unsigned int hasInputDeviceID : 1; 
        unsigned int hasInputAssistantID : 1; 
    }  _mutationFlags;
    NSString * _requestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getInputAssistantID;
- (id)getInputDeviceID;
- (id)getRequestID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setInputAssistantID:(id)arg1;
- (void)setInputDeviceID:(id)arg1;
- (void)setRequestID:(id)arg1;

@end

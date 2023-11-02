
@interface _AFDeviceRequestHandlingRecordMutation : NSObject <AFDeviceRequestHandlingRecordMutating> {
    AFDeviceRequestHandlingRecord * _base;
    unsigned long long  _deviceRoles;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasRequestID : 1; 
        unsigned int hasDeviceRoles : 1; 
    }  _mutationFlags;
    NSString * _requestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getDeviceRoles;
- (id)getRequestID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDeviceRoles:(unsigned long long)arg1;
- (void)setRequestID:(id)arg1;

@end

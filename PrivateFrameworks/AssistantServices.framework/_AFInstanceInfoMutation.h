
@interface _AFInstanceInfoMutation : NSObject <AFInstanceInfoMutating> {
    long long  _applicationType;
    NSUUID * _applicationUUID;
    AFInstanceInfo * _base;
    NSUUID * _instanceUUID;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasInstanceUUID : 1; 
        unsigned int hasApplicationType : 1; 
        unsigned int hasApplicationUUID : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getApplicationType;
- (id)getApplicationUUID;
- (id)getInstanceUUID;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setApplicationType:(long long)arg1;
- (void)setApplicationUUID:(id)arg1;
- (void)setInstanceUUID:(id)arg1;

@end

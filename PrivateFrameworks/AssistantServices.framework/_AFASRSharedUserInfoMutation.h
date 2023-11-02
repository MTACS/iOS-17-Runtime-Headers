
@interface _AFASRSharedUserInfoMutation : NSObject <AFASRSharedUserInfoMutating> {
    AFASRSharedUserInfo * _base;
    NSString * _loggableSharedUserId;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSharedUserId : 1; 
        unsigned int hasLoggableSharedUserId : 1; 
    }  _mutationFlags;
    NSString * _sharedUserId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getLoggableSharedUserId;
- (id)getSharedUserId;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setSharedUserId:(id)arg1;

@end


@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating> {
    long long  _actionType;
    AFSiriActivationResult * _base;
    NSError * _error;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasActionType : 1; 
        unsigned int hasError : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getActionType;
- (id)getError;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setActionType:(long long)arg1;
- (void)setError:(id)arg1;

@end

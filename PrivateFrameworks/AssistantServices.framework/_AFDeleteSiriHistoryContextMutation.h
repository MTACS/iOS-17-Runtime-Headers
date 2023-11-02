
@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating> {
    AFDeleteSiriHistoryContext * _base;
    NSString * _errorBody;
    NSString * _errorButtonText;
    NSString * _errorTitle;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasSuccessTitle : 1; 
        unsigned int hasSuccessBody : 1; 
        unsigned int hasSuccessButtonText : 1; 
        unsigned int hasErrorTitle : 1; 
        unsigned int hasErrorBody : 1; 
        unsigned int hasErrorButtonText : 1; 
    }  _mutationFlags;
    NSString * _successBody;
    NSString * _successButtonText;
    NSString * _successTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getErrorBody;
- (id)getErrorButtonText;
- (id)getErrorTitle;
- (id)getSuccessBody;
- (id)getSuccessButtonText;
- (id)getSuccessTitle;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setErrorBody:(id)arg1;
- (void)setErrorButtonText:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setSuccessBody:(id)arg1;
- (void)setSuccessButtonText:(id)arg1;
- (void)setSuccessTitle:(id)arg1;

@end

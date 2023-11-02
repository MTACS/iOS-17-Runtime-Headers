
@interface _AFTestRequestOptionsMutation : NSObject <AFTestRequestOptionsMutating> {
    AFTestRequestOptions * _base;
    NSString * _inputOrigin;
    NSNumber * _isEyesFree;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasRequestPath : 1; 
        unsigned int hasInputOrigin : 1; 
        unsigned int hasIsEyesFree : 1; 
    }  _mutationFlags;
    long long  _requestPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getInputOrigin;
- (id)getIsEyesFree;
- (long long)getRequestPath;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setInputOrigin:(id)arg1;
- (void)setIsEyesFree:(id)arg1;
- (void)setRequestPath:(long long)arg1;

@end

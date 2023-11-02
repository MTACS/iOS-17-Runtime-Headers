
@interface _AFClientInfoMutation : NSObject <AFClientInfoMutating> {
    AFClientInfo * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasProcessIdentifier : 1; 
        unsigned int hasProcessName : 1; 
    }  _mutationFlags;
    int  _processIdentifier;
    NSString * _processName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)getProcessIdentifier;
- (id)getProcessName;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessName:(id)arg1;

@end

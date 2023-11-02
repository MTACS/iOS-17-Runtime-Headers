
@interface _SVXClientInfoMutation : NSObject <SVXClientInfoMutating> {
    SVXClientInfo * _baseModel;
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
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessName:(id)arg1;

@end

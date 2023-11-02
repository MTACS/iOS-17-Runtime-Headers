
@interface _AFSiriHomeAutomationRequestInfoMutation : NSObject <AFSiriHomeAutomationRequestInfoMutating> {
    AFSiriHomeAutomationRequestInfo * _baseModel;
    NSData * _context;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasContext : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setContext:(id)arg1;

@end

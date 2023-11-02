
@interface _AFSpeechTestRequestOptionsMutation : NSObject <AFSpeechTestRequestOptionsMutating> {
    AFSpeechTestRequestOptions * _base;
    NSArray * _jitContext;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasJitContext : 1; 
        unsigned int hasOverrideModelPath : 1; 
    }  _mutationFlags;
    NSString * _overrideModelPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getJitContext;
- (id)getOverrideModelPath;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setJitContext:(id)arg1;
- (void)setOverrideModelPath:(id)arg1;

@end

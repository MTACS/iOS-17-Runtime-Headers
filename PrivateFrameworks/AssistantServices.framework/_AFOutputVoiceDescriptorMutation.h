
@interface _AFOutputVoiceDescriptorMutation : NSObject <AFOutputVoiceDescriptorMutating> {
    AFOutputVoiceDescriptor * _base;
    NSString * _localizedDisplay;
    NSString * _localizedDisplayWithRegion;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasLocalizedDisplay : 1; 
        unsigned int hasLocalizedDisplayWithRegion : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getLocalizedDisplay;
- (id)getLocalizedDisplayWithRegion;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setLocalizedDisplay:(id)arg1;
- (void)setLocalizedDisplayWithRegion:(id)arg1;

@end

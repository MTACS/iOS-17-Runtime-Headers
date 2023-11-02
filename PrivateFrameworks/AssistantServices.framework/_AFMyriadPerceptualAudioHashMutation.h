
@interface _AFMyriadPerceptualAudioHashMutation : NSObject <AFMyriadPerceptualAudioHashMutating> {
    AFMyriadPerceptualAudioHash * _base;
    NSData * _data;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasData : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getData;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setData:(id)arg1;

@end

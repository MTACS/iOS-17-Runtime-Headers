
@interface _SVXDeactivationOptionsMutation : NSObject <SVXDeactivationOptionsMutating> {
    double  _audioSessionDeactivationDelay;
    SVXDeactivationOptions * _baseModel;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAudioSessionDeactivationDelay : 1; 
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
- (void)setAudioSessionDeactivationDelay:(double)arg1;

@end

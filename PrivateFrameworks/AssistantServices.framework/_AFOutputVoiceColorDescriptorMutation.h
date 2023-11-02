
@interface _AFOutputVoiceColorDescriptorMutation : NSObject <AFOutputVoiceColorDescriptorMutating> {
    float  _alpha;
    AFOutputVoiceColorDescriptor * _baseModel;
    NSString * _colorName;
    NSString * _hexColor;
    NSString * _localizedOutputVoice;
    NSString * _localizedOutputVoiceColor;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasHexColor : 1; 
        unsigned int hasColorName : 1; 
        unsigned int hasAlpha : 1; 
        unsigned int hasLocalizedOutputVoiceColor : 1; 
        unsigned int hasLocalizedOutputVoice : 1; 
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
- (void)setAlpha:(float)arg1;
- (void)setColorName:(id)arg1;
- (void)setHexColor:(id)arg1;
- (void)setLocalizedOutputVoice:(id)arg1;
- (void)setLocalizedOutputVoiceColor:(id)arg1;

@end


@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {
    AFAccessibilityState * _base;
    long long  _isVibrationDisabled;
    long long  _isVoiceOverTouchEnabled;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIsVoiceOverTouchEnabled : 1; 
        unsigned int hasIsVibrationDisabled : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getIsVibrationDisabled;
- (long long)getIsVoiceOverTouchEnabled;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setIsVibrationDisabled:(long long)arg1;
- (void)setIsVoiceOverTouchEnabled:(long long)arg1;

@end

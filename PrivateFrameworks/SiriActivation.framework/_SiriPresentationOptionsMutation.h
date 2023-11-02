
@interface _SiriPresentationOptionsMutation : NSObject <SiriPresentationOptionsMutating> {
    SiriPresentationOptions * _baseModel;
    bool  _hideOtherWindowsDuringAppearance;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasWakeScreen : 1; 
        unsigned int hasHideOtherWindowsDuringAppearance : 1; 
        unsigned int hasRotationStyle : 1; 
        unsigned int hasRequestSource : 1; 
    }  _mutationFlags;
    long long  _requestSource;
    long long  _rotationStyle;
    bool  _wakeScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setHideOtherWindowsDuringAppearance:(bool)arg1;
- (void)setRequestSource:(long long)arg1;
- (void)setRotationStyle:(long long)arg1;
- (void)setWakeScreen:(bool)arg1;

@end


@interface TRAArbitrationInputs : NSObject <BSDescriptionProviding, NSCopying> {
    TRAArbitrationAmbientPresentationInputs * _ambientPresentationInputs;
    TRAArbitrationDeviceOrientationInputs * _deviceOrientationInputs;
    TRAArbitrationInterfaceIdiomInputs * _interfaceIdiomInputs;
    TRAArbitrationKeyboardInputs * _keyboardInputs;
    TRAArbitrationUserInterfaceStyleInputs * _userInterfaceStyleInputs;
}

@property (nonatomic, readonly, copy) TRAArbitrationAmbientPresentationInputs *ambientPresentationInputs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) TRAArbitrationDeviceOrientationInputs *deviceOrientationInputs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) TRAArbitrationInterfaceIdiomInputs *interfaceIdiomInputs;
@property (nonatomic, readonly, copy) TRAArbitrationKeyboardInputs *keyboardInputs;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) TRAArbitrationUserInterfaceStyleInputs *userInterfaceStyleInputs;

- (void).cxx_destruct;
- (id)ambientPresentationInputs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceOrientationInputs;
- (id)initWithInterfaceIdiomInputs:(id)arg1 deviceOrientationInputs:(id)arg2 keyboardInputs:(id)arg3 ambientPresentationInputs:(id)arg4;
- (id)initWithInterfaceIdiomInputs:(id)arg1 userInterfaceStyleInputs:(id)arg2 deviceOrientationInputs:(id)arg3 keyboardInputs:(id)arg4 ambientPresentationInputs:(id)arg5;
- (id)interfaceIdiomInputs;
- (id)keyboardInputs;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInterfaceStyleInputs;

@end

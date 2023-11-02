
@protocol AVTCoreModelPicker <NSObject>

@required

- (NSString *)identifier;
- (AVTCoreModelPickerOptions *)options;
- (AVTCoreModelPairing *)pairing;
- (NSString *)title;

@end

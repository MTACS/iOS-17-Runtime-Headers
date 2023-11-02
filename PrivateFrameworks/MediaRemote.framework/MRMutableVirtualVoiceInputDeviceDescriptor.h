
@interface MRMutableVirtualVoiceInputDeviceDescriptor : MRVirtualVoiceInputDeviceDescriptor

@property (nonatomic, copy) NSDictionary *defaultFormat;
@property (nonatomic, copy) NSArray *supportedFormats;

- (void)setDefaultFormat:(id)arg1;
- (void)setSupportedFormats:(id)arg1;

@end

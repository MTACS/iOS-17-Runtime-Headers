
@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary * _VTCleanApertureDictionary;
    NSDictionary * _VTPixelAspectRatioDictionary;
}

@property (nonatomic, readonly) NSString *fieldMode;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (bool)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (bool)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (id)fieldMode;
- (int)height;
- (id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2;
- (id)initWithTrustedPixelBufferAttributes:(id)arg1;
- (id)pixelAspectRatioDictionary;
- (id)pixelBufferAttributes;
- (int)width;
- (bool)willYieldCompressedSamples;

@end

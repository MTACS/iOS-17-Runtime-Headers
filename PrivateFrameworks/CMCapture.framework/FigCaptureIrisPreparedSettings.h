
@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying, NSSecureCoding> {
    int  _HDRMode;
    unsigned int  _bracketedImageCount;
    NSArray * _bravoConstituentImageDeliveryDeviceTypes;
    int  _digitalFlashMode;
    unsigned int  _outputHeight;
    unsigned int  _outputWidth;
    unsigned int  _processedOutputFormat;
    int  _qualityPrioritization;
    unsigned int  _rawOutputFormat;
    long long  _settingsID;
}

@property (nonatomic) int HDRMode;
@property (nonatomic) unsigned int bracketedImageCount;
@property (nonatomic, copy) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int digitalFlashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int processedOutputFormat;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) long long settingsID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)HDRMode;
- (unsigned int)bracketedImageCount;
- (id)bravoConstituentImageDeliveryDeviceTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (int)digitalFlashMode;
- (void)encodeWithCoder:(id)arg1;
- (id)figCaptureStillImageSettingsRepresentation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)outputHeight;
- (unsigned int)outputWidth;
- (unsigned int)processedOutputFormat;
- (int)qualityPrioritization;
- (unsigned int)rawOutputFormat;
- (void)setBracketedImageCount:(unsigned int)arg1;
- (void)setBravoConstituentImageDeliveryDeviceTypes:(id)arg1;
- (void)setDigitalFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setOutputHeight:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned int)arg1;
- (void)setProcessedOutputFormat:(unsigned int)arg1;
- (void)setQualityPrioritization:(int)arg1;
- (void)setRawOutputFormat:(unsigned int)arg1;
- (void)setSettingsID:(long long)arg1;
- (long long)settingsID;

@end

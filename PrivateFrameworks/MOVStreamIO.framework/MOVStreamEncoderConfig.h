
@interface MOVStreamEncoderConfig : NSObject {
    unsigned int  _codecType;
    NSDictionary * _encoderSpecification;
    NSDictionary * _sessionProperties;
}

@property unsigned int codecType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (retain) NSDictionary *encoderSpecification;
@property (retain) NSDictionary *sessionProperties;

+ (id)encoderIdsForType:(unsigned int)arg1;
+ (bool)isEncoderAvailableOfType:(unsigned int)arg1 withId:(id)arg2;
+ (id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(unsigned long long)arg1;
+ (id)monochrome10BitEncoderConfigUsingAVEWithQuality:(double)arg1;
+ (id)supportedProfileLevelsForHEVC;

- (void).cxx_destruct;
- (bool)applySessionProperties:(struct OpaqueVTCompressionSession { }*)arg1;
- (unsigned int)codecType;
- (id)dictionaryRepresentation;
- (void)enableAVEHighPerformanceProfile;
- (id)encoderSpecification;
- (id)initWithCodecType:(unsigned int)arg1 encoderSpecification:(id)arg2 sessionProperties:(id)arg3;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)sessionProperties;
- (void)setCodecType:(unsigned int)arg1;
- (void)setEncoderSpecification:(id)arg1;
- (void)setSessionProperties:(id)arg1;
- (bool)writeToFile:(id)arg1 error:(id*)arg2;

@end

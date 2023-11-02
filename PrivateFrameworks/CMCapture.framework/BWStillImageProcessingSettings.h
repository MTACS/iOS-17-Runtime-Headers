
@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding> {
    BWPhotoManifest * _photoManifest;
    bool  _processIntelligentDistortionCorrection;
    bool  _provideDemosaicedRaw;
}

@property (nonatomic, readonly) int expectedClientImageCount;
@property (nonatomic, readonly) BWPhotoManifest *photoManifest;
@property (nonatomic, readonly) bool processIntelligentDistortionCorrection;
@property (nonatomic, readonly) bool provideDemosaicedRaw;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)expectedClientImageCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoManifest:(id)arg1 processIntelligentDistortionCorrection:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)photoManifest;
- (bool)processIntelligentDistortionCorrection;
- (bool)provideDemosaicedRaw;

@end

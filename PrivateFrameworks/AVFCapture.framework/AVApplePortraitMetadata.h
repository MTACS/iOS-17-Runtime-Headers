
@interface AVApplePortraitMetadata : NSObject <NSSecureCoding> {
    AVApplePortraitMetadataInternal * _internal;
}

@property (readonly) unsigned int SDOFRenderingVersion;
@property (readonly) float apertureFocalRatio;
@property (readonly) NSData *faceObservationsData;
@property (readonly) int faceOrientation;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusRectangle;
@property (readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (readonly) float luminanceNoiseAmplitude;
@property (readonly) float maximumApertureFocalRatio;
@property (readonly) float minimumApertureFocalRatio;
@property (readonly) float portraitLightingEffectStrength;

+ (bool)supportsSecureCoding;

- (unsigned int)SDOFRenderingVersion;
- (float)apertureFocalRatio;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)faceObservationsData;
- (int)faceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRectangle;
- (id)indexesOfShallowDepthOfFieldObservations;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)initWithPortraitMetadataDictionary:(id)arg1;
- (float)luminanceNoiseAmplitude;
- (float)maximumApertureFocalRatio;
- (float)minimumApertureFocalRatio;
- (float)portraitLightingEffectStrength;

@end

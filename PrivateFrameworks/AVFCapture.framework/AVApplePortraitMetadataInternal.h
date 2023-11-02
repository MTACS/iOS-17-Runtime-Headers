
@interface AVApplePortraitMetadataInternal : NSObject {
    unsigned int  SDOFRenderingVersion;
    float  apertureFocalRatio;
    NSData * faceObservationsData;
    int  faceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  focusRectangle;
    NSIndexSet * indexesOfShallowDepthOfFieldObservations;
    float  luminanceNoiseAmplitude;
    float  maximumApertureFocalRatio;
    float  minimumApertureFocalRatio;
    float  portraitLightingEffectStrength;
    int  version;
}

@property (nonatomic) unsigned int SDOFRenderingVersion;
@property (nonatomic) float apertureFocalRatio;
@property (nonatomic, retain) NSData *faceObservationsData;
@property (nonatomic) int faceOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusRectangle;
@property (nonatomic, retain) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (nonatomic) float luminanceNoiseAmplitude;
@property (nonatomic) float maximumApertureFocalRatio;
@property (nonatomic) float minimumApertureFocalRatio;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) int version;

- (unsigned int)SDOFRenderingVersion;
- (float)apertureFocalRatio;
- (void)dealloc;
- (id)faceObservationsData;
- (int)faceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRectangle;
- (id)indexesOfShallowDepthOfFieldObservations;
- (id)init;
- (float)luminanceNoiseAmplitude;
- (float)maximumApertureFocalRatio;
- (float)minimumApertureFocalRatio;
- (float)portraitLightingEffectStrength;
- (void)setApertureFocalRatio:(float)arg1;
- (void)setFaceObservationsData:(id)arg1;
- (void)setFaceOrientation:(int)arg1;
- (void)setFocusRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexesOfShallowDepthOfFieldObservations:(id)arg1;
- (void)setLuminanceNoiseAmplitude:(float)arg1;
- (void)setMaximumApertureFocalRatio:(float)arg1;
- (void)setMinimumApertureFocalRatio:(float)arg1;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setSDOFRenderingVersion:(unsigned int)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end

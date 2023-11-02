
@interface CMIModuleCalibration : NSObject <NSCopying, NSSecureCoding> {
    CMIBlackLevelShadingCorrectionThumbnails * _blacklevelShadingCorrectionThumbnails;
    CMIShadingFPNCorrectionImage * _quadraShadingFPNCorrectionImage;
    CMIShadingFPNCorrectionImage * _shadingFPNCorrectionImage;
}

@property (nonatomic, retain) CMIBlackLevelShadingCorrectionThumbnails *blacklevelShadingCorrectionThumbnails;
@property (nonatomic, retain) CMIShadingFPNCorrectionImage *quadraShadingFPNCorrectionImage;
@property (nonatomic, retain) CMIShadingFPNCorrectionImage *shadingFPNCorrectionImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blacklevelShadingCorrectionThumbnails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quadraShadingFPNCorrectionImage;
- (void)setBlacklevelShadingCorrectionThumbnails:(id)arg1;
- (void)setQuadraShadingFPNCorrectionImage:(id)arg1;
- (void)setShadingFPNCorrectionImage:(id)arg1;
- (id)shadingFPNCorrectionImage;

@end

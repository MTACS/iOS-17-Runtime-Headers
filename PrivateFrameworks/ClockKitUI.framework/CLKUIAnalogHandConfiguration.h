
@interface CLKUIAnalogHandConfiguration : NSObject <NSCopying> {
    double  _armLength;
    double  _armWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _directionalShadowOffset;
    double  _dropShadowOpacity;
    double  _dropShadowRadius;
    bool  _excludePeg;
    bool  _excludeSecondTail;
    double  _handLength;
    double  _handWidth;
    double  _inlayInsetRadius;
    double  _pegRadius;
    double  _pegStrokeWidth;
    double  _radialShadowOpacity;
    double  _radialShadowRadius;
    bool  _removeInlay;
    bool  _roundedSecondHand;
    double  _smoothingRadius;
    double  _tailLength;
    unsigned long long  _type;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) double armLength;
@property (nonatomic) double armWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGSize { double x1; double x2; } directionalShadowOffset;
@property (nonatomic) double dropShadowOpacity;
@property (nonatomic) double dropShadowRadius;
@property (nonatomic) bool excludePeg;
@property (nonatomic) bool excludeSecondTail;
@property (nonatomic) double handLength;
@property (nonatomic) double handWidth;
@property (nonatomic) double inlayInsetRadius;
@property (nonatomic) double pegRadius;
@property (nonatomic) double pegStrokeWidth;
@property (nonatomic) double radialShadowOpacity;
@property (nonatomic) double radialShadowRadius;
@property (nonatomic) bool removeInlay;
@property (nonatomic) bool roundedSecondHand;
@property (nonatomic) double smoothingRadius;
@property (nonatomic) double tailLength;
@property (nonatomic) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI

+ (id)defaultHourConfigurationForDevice:(id)arg1;
+ (id)defaultMinuteConfigurationForDevice:(id)arg1;
+ (id)defaultSecondConfigurationForDevice:(id)arg1;
+ (id)defaultSubdialConfigurationForDevice:(id)arg1;

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)armLength;
- (double)armWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)configurationByApplyingInset:(double)arg1;
- (id)configurationByApplyingScale:(double)arg1;
- (void)copyToConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (struct CGSize { double x1; double x2; })directionalShadowOffset;
- (id)dropShadowCacheIdentifier;
- (double)dropShadowOpacity;
- (double)dropShadowRadius;
- (bool)excludePeg;
- (bool)excludeSecondTail;
- (id)handCacheIdentifier;
- (double)handLength;
- (double)handWidth;
- (unsigned long long)hash;
- (double)inlayInsetRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inlayInsets;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (double)pegRadius;
- (double)pegStrokeWidth;
- (id)radialShadowCacheIdentifier;
- (double)radialShadowOpacity;
- (double)radialShadowRadius;
- (bool)removeInlay;
- (bool)roundedSecondHand;
- (void)setArmLength:(double)arg1;
- (void)setArmWidth:(double)arg1;
- (void)setDirectionalShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setDropShadowOpacity:(double)arg1;
- (void)setDropShadowRadius:(double)arg1;
- (void)setExcludePeg:(bool)arg1;
- (void)setExcludeSecondTail:(bool)arg1;
- (void)setHandLength:(double)arg1;
- (void)setHandWidth:(double)arg1;
- (void)setInlayInsetRadius:(double)arg1;
- (void)setPegRadius:(double)arg1;
- (void)setPegStrokeWidth:(double)arg1;
- (void)setRadialShadowOpacity:(double)arg1;
- (void)setRadialShadowRadius:(double)arg1;
- (void)setRemoveInlay:(bool)arg1;
- (void)setRoundedSecondHand:(bool)arg1;
- (void)setSmoothingRadius:(double)arg1;
- (void)setTailLength:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (double)smoothingRadius;
- (double)tailLength;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/ClockPoster.framework/ClockPoster

- (id)cp_handConfigurationRoundedToScaleOfView:(id)arg1;

@end

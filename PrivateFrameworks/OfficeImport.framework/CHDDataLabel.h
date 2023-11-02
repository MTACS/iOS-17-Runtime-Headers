
@interface CHDDataLabel : NSObject {
    bool  mContentFormatDerived;
    unsigned long long  mContentFormatId;
    bool  mDeleted;
    bool  mExtensionDetected;
    OADGraphicProperties * mGraphicProperties;
    bool  mIsPositionAffineTransform;
    OADGraphicProperties * mLeaderlineGraphicProperties;
    int  mPosition;
    EDResources * mResources;
    double  mRotation;
    bool  mShowBubbleSize;
    bool  mShowCategoryName;
    bool  mShowLeaderLines;
    bool  mShowLegendKey;
    bool  mShowPercent;
    bool  mShowSeriesName;
    bool  mShowValue;
    EDString * mString;
}

@property (nonatomic, retain) EDString *string;

+ (id)dataLabelWithResources:(id)arg1;

- (void).cxx_destruct;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (id)description;
- (id)graphicProperties;
- (bool)hasLeaderLinesGraphics;
- (id)initWithResources:(id)arg1;
- (bool)isContentFormatDerivedFromDataPoints;
- (bool)isCustomLabelBlockingVisibility;
- (bool)isDeleted;
- (bool)isExtensionDetected;
- (bool)isLabelVisible;
- (bool)isPositionAffineTransform;
- (bool)isShowBubbleSize;
- (bool)isShowCategoryName;
- (bool)isShowLeaderLines;
- (bool)isShowLegendKey;
- (bool)isShowPercent;
- (bool)isShowSeriesName;
- (bool)isShowValue;
- (id)leaderlineGraphicProperties;
- (int)position;
- (double)rotationAngle;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setExtensionDetected:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(bool)arg1;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (void)setLeaderlineGraphicProperties:(id)arg1;
- (void)setPosition:(int)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setShowBubbleSize:(bool)arg1;
- (void)setShowCategoryName:(bool)arg1;
- (void)setShowLeaderLines:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (void)setShowPercent:(bool)arg1;
- (void)setShowSeriesName:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end

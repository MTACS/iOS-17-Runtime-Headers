
@interface PXStoryTextResourceInfo : NSObject {
    NSString * _assetCollectionUUID;
    NSString * _associatedSubtitleString;
    long long  _forcedPositionIndex;
    bool  _hasForcedPositioning;
    long long  _layoutScheme;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSAttributedString * _lock_attributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _lock_boundingSize;
    NSStringDrawingContext * _lock_drawingContext;
    long long  _lock_effectivePositionIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lock_origin;
    long long  _lock_textAlignment;
    NSString * _string;
    long long  _type;
}

@property (nonatomic, readonly) NSString *assetCollectionUUID;
@property (nonatomic, readonly) NSString *associatedSubtitleString;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) double boundingRectPadding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } boundingSize;
@property (nonatomic, readonly) NSStringDrawingContext *drawingContext;
@property (nonatomic, readonly) long long drawingOptions;
@property (nonatomic) long long effectivePositionIndex;
@property (nonatomic) long long forcedPositionIndex;
@property (nonatomic) bool hasForcedPositioning;
@property (nonatomic, readonly) long long layoutScheme;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long verticalAlignment;

+ (id)_allowedSubtitleCharacterSetWithKind:(unsigned long long)arg1;
+ (id)_allowedTitleCharacterSetWithStylePairing:(long long)arg1 kind:(unsigned long long)arg2;
+ (void)_increaseMaximumLineHeightToAvoidOverlapForLines:(id)arg1 attributes:(id)arg2 attributedString:(id*)arg3;
+ (id)_rangesAndStylesForTitle:(id)arg1;
+ (void)_setKashidaToParagraphStyle:(id)arg1;
+ (id)_subtitleFontCacheKeyForKind:(unsigned long long)arg1;
+ (id)_subtitleFontForKind:(unsigned long long)arg1 scale:(double)arg2 hasExtendedCharacterSet:(bool)arg3 internationalStyle:(long long)arg4;
+ (id)_titleFontCacheKeyForStylePairing:(long long)arg1 kind:(unsigned long long)arg2;
+ (id)_titleFontDescriptorForStylePairing:(long long)arg1 kind:(unsigned long long)arg2;
+ (id)_titleFontForStylePairing:(long long)arg1 scale:(double)arg2 kind:(unsigned long long)arg3 internationalStyle:(long long)arg4;
+ (id)_titlePrimaryAttributesForStylePairing:(long long)arg1 scale:(double)arg2 kind:(unsigned long long)arg3 layoutScheme:(long long)arg4 allowHyphenation:(bool)arg5 internationalStyle:(long long)arg6;
+ (id)subtitleAttributesForSize:(struct CGSize { double x1; double x2; })arg1 string:(id)arg2 scale:(double)arg3 kind:(unsigned long long)arg4 extendedTraitCollectionSnapshot:(id)arg5 internationalStyle:(long long)arg6;
+ (id)subtitleCachedCharacterSetByKind;
+ (id)titleCachedCharacterSetByStyleAndKind;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_availableSizeForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 extendedTraitCollectionSnapshot:(id)arg2 kind:(unsigned long long)arg3 fixedBottomPadding:(double)arg4;
- (void)_checkForForcedPositioning:(id*)arg1;
- (struct CGSize { double x1; double x2; })_fullScreenAvailableSizeForExtendedTraitCollectionSnapshot:(id)arg1 fixedBottomPadding:(double)arg2;
- (long long)_fullScreenTitlePositionWithTitleCategory:(id)arg1 displayAsset:(id)arg2 currentAssetCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 relativeTo:(id)arg4 extendedTraitCollectionSnapshot:(id)arg5 fixedBottomPadding:(double)arg6 desiredInternationalStyle:(long long)arg7;
- (bool)_isKashidaText:(id)arg1;
- (bool)_isUserInterfaceIdiomPadOrMacOrTV:(id)arg1;
- (bool)_isVerticalText:(id)arg1;
- (struct CGSize { double x1; double x2; })_occlusionSizeForSize:(struct CGSize { double x1; double x2; })arg1 kind:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 containerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 stylePairing:(long long)arg5 extendedTraitCollectionSnapshot:(id)arg6 fixedBottomPadding:(double)arg7 isVerticalText:(bool)arg8 isKashida:(bool)arg9;
- (double)_paddingBottomForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 fixedBottomPadding:(double)arg4;
- (double)_paddingBottomScaleForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2;
- (double)_paddingLeadingMinimumForKind:(unsigned long long)arg1 orientationIsLandscape:(bool)arg2;
- (double)_paddingLeftOrRightAlignmentLeadingForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)_paddingLeftOrRightAlignmentLeadingScaleForKind:(unsigned long long)arg1 orientationIsLandscape:(bool)arg2;
- (double)_paddingTopForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)_paddingTopScaleForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2;
- (id)_possibleTitlePositionsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boudingSize:(struct CGSize { double x1; double x2; })arg2 occlusionSize:(struct CGSize { double x1; double x2; })arg3 kind:(unsigned long long)arg4 extendedTraitCollectionSnapshot:(id)arg5 fixedBottomPadding:(double)arg6 isTitleVertical:(bool)arg7 isSubtitleVertical:(bool)arg8 isKashida:(bool)arg9;
- (double)_sizeWidthMaximumForKind:(unsigned long long)arg1 orientationIsLandscape:(bool)arg2;
- (double)_sizeWidthMinimumForKind:(unsigned long long)arg1 orientationIsLandscape:(bool)arg2;
- (double)_sizeWidthScaleForKind:(unsigned long long)arg1 extendedTraitCollectionSnapshot:(id)arg2;
- (long long)_stylePairingFromTitleCategory:(id)arg1 string:(id)arg2 kind:(unsigned long long)arg3;
- (double)_subtitleLineSpacingForKind:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 extendedTraitCollectionSnapshot:(id)arg3 fixedBottomPadding:(double)arg4 isVerticalText:(bool)arg5;
- (struct CGPoint { double x1; double x2; })_subtitlePositionInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 titleCategory:(id)arg2 displayAsset:(id)arg3 currentAssetCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 kind:(unsigned long long)arg5 relativeTo:(id)arg6 extendedTraitCollectionSnapshot:(id)arg7 fixedBottomPadding:(double)arg8 isTitleVertical:(bool)arg9 isSubtitleVertical:(bool)arg10;
- (double)_subtitleScalingFactorForKind:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 extendedTraitCollectionSnapshot:(id)arg3 fixedBottomPadding:(double)arg4;
- (double)_titleScalingFactorForKind:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 extendedTraitCollectionSnapshot:(id)arg3 fixedBottomPadding:(double)arg4;
- (id)assetCollectionUUID;
- (id)associatedSubtitleString;
- (id)attributedString;
- (id)attributedStringBoundingSizeForSubtitle:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 containerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 kind:(unsigned long long)arg4 relativeTo:(id)arg5 extendedTraitCollectionSnapshot:(id)arg6 fixedBottomPadding:(double)arg7 desiredInternationalStyle:(long long)arg8;
- (id)attributedStringBoundingSizeForTitle:(id)arg1 stylePairing:(long long)arg2 availableSize:(struct CGSize { double x1; double x2; })arg3 containerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 kind:(unsigned long long)arg5 extendedTraitCollectionSnapshot:(id)arg6 fixedBottomPadding:(double)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributedStringFrameInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 titleCategory:(id)arg2 displayAsset:(id)arg3 currentAssetCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 kind:(unsigned long long)arg5 relativeTo:(id)arg6 extendedTraitCollectionSnapshot:(id)arg7 fixedBottomPadding:(double)arg8;
- (struct CGPoint { double x1; double x2; })bestPositionInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 occlusionSize:(struct CGSize { double x1; double x2; })arg2 possiblePositions:(id)arg3 displayAsset:(id)arg4 currentAssetCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 layoutOrientation:(long long)arg6 desiredInternationalStyle:(long long)arg7;
- (double)boundingRectPadding;
- (struct CGSize { double x1; double x2; })boundingSize;
- (id)drawingContext;
- (long long)drawingOptions;
- (long long)effectivePositionIndex;
- (long long)forcedPositionIndex;
- (bool)hasForcedPositioning;
- (id)initWithString:(id)arg1 associatedSubtitleString:(id)arg2 type:(long long)arg3 layoutScheme:(long long)arg4 assetCollectionUUID:(id)arg5;
- (bool)isEqual:(id)arg1;
- (long long)layoutScheme;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setEffectivePositionIndex:(long long)arg1;
- (void)setForcedPositionIndex:(long long)arg1;
- (void)setHasForcedPositioning:(bool)arg1;
- (id)string;
- (long long)textAlignment;
- (long long)type;
- (long long)verticalAlignment;

@end

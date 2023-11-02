
@interface UIImage : NSObject <MKArtworkImageSource, NSCopying, NSDiscardableContent, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, UIImageJSExports, UIItemProviderPresentationSizeProviding, UIItemProviderReading, UIItemProviderWriting, _UIMenuImageOrName> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    double  _baselineOffsetFromBottom;
    double  _capHeight;
    UIImageConfiguration * _configuration;
    _UIImageContent * _content;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIImageAsset * _imageAsset;
    struct { 
        unsigned int named : 1; 
        unsigned int asksContentForImageOrientation : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int renderingMode : 2; 
        unsigned int suppressesAccessibilityHairlineThickening : 1; 
        unsigned int isSymbolConfiguration : 1; 
        unsigned int hasBaseline : 1; 
        unsigned int isBaselineExplicit : 1; 
        unsigned int areContentInsetsExplicit : 1; 
        unsigned int areAlignmentRectInsetsExplicit : 1; 
        unsigned int flipsForRightToLeftLayoutDirection : 1; 
        unsigned int hasCapHeight : 1; 
    }  _imageFlags;
    NSMapTable * _siblingImages;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeInPixels;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) id CGImageRef;
@property (getter=_CGPDFPage, nonatomic, readonly) struct CGPDFPage { }*CGPDFPage;
@property (getter=_CGSVGDocument, nonatomic, readonly) struct CGSVGDocument { }*CGSVGDocument;
@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly) bool PG_wantsVibrancyEffect;
@property (nonatomic, readonly) UIImage *_asMenuElementImage;
@property (nonatomic, readonly) NSString *_asMenuElementImageName;
@property (nonatomic, readonly) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property (nonatomic, readonly) double _capHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInsets;
@property (readonly) struct CGImage { }*_gkCGImage;
@property (readonly) long long _gkImageOrientation;
@property (readonly) double _gkScale;
@property (nonatomic, readonly) bool _hasContentInsets;
@property (setter=_setSubimageInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _subimageInsets;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) NSString *accessibilityLanguage;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, readonly) NSURL *artworkCatalogBackingFileURL;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) TMLRect *bounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } capInsets;
@property (nonatomic, readonly) double cd_baselineOffsetFromBottom;
@property (nonatomic, readonly, copy) UIImageConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool flipsForRightToLeftLayoutDirection;
@property (getter=isFromStatusBarImageProvider, nonatomic, readonly) bool fromStatusBarImageProvider;
@property (nonatomic, readonly) bool hasBaseline;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } hf_sizeInScreenScale;
@property (setter=_setImageAsset:, nonatomic, retain) UIImageAsset *imageAsset;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) UIGraphicsImageRendererFormat *imageRendererFormat;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) bool isHighDynamicRange;
@property (nonatomic, readonly) long long leftCapWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredPresentationSizeForItemProvider;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } px_pixelSize;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) long long resizingMode;
@property (getter=safari_isSVGImage, nonatomic, readonly) bool safari_svgImage;
@property (setter=safari_setTransparencyAnalysisResult:, nonatomic) long long safari_transparencyAnalysisResult;
@property (nonatomic, readonly) bool safari_transparencyAnalysisResultIsNotOpaque;
@property (nonatomic, readonly) double scale;
@property (setter=sf_setIsMonogram:, nonatomic) bool sf_isMonogram;
@property (nonatomic, readonly) bool sf_shouldApplyBackingForDarkBackdrop;
@property (nonatomic, readonly) long long sf_tabSnapshotEffectsVersion;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UIImageSymbolConfiguration *symbolConfiguration;
@property (getter=isSymbolImage, nonatomic, readonly) bool symbolImage;
@property (nonatomic, readonly) long long topCapHeight;
@property (nonatomic, readonly, copy) UITraitCollection *traitCollection;
@property (nonatomic, readonly) UIImageView *vk_imageView;
@property (nonatomic, readonly) struct CGImage { }*vuiCGImage;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_ISImageDescriptorNameForUIApplicationIconFormat:(int)arg1;
+ (id)__systemImageNamed:(id)arg1;
+ (id)__systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)__systemImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)__systemImageNamedSwift:(id)arg1;
+ (id)_animatedImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 duration:(double)arg4;
+ (id)_animatedResizableImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 resizingMode:(long long)arg5 duration:(double)arg6;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(double)arg3;
+ (struct CGSize { double x1; double x2; })_applyOrientation:(long long)arg1 toContentSizeInPixels:(struct CGSize { double x1; double x2; })arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id /* block */)arg2;
+ (void)_clearAssetCaches;
+ (id)_defaultBackgroundGradient;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForStylePresetNames:(id)arg1 scale:(double)arg2 traitCollection:(id)arg3;
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
+ (id)_generateCompositedSymbolImageForAsset:(id)arg1 usingLayers:(id)arg2 configuration:(id)arg3 alignUsingBaselines:(bool)arg4;
+ (long long)_horizontallyFlippedOrientationForOrientation:(long long)arg1;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2 options:(unsigned long long)arg3;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 options:(int)arg3 variantsScale:(double)arg4;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(double)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 idiom:(long long)arg2 scale:(double*)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(double*)arg2;
+ (long long)_idiomDefinedByPath:(id)arg1;
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)_imageWithCGPDFPage:(struct CGPDFPage { }*)arg1;
+ (id)_imageWithCGPDFPage:(struct CGPDFPage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_imageWithCGSVGDocument:(struct CGSVGDocument { }*)arg1;
+ (id)_imageWithCGSVGDocument:(struct CGSVGDocument { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (bool)_isCGImageAlphaMask:(struct CGImage { }*)arg1;
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;
+ (struct CGSize { double x1; double x2; })_legibilityImageSizeForSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;
+ (void)_loadImageFromURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (long long)_mirroredImageOrientationForOrientation:(long long)arg1;
+ (id)_noiseImage;
+ (unsigned long long)_scaleDefinedByPath:(id)arg1;
+ (id)_systemImageNamed:(id)arg1;
+ (id)_systemImageNamed:(id)arg1 fallback:(id)arg2;
+ (id)_systemImageNamed:(id)arg1 fallback:(id)arg2 withConfiguration:(id)arg3;
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2;
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2 fill:(long long)arg3;
+ (id)_systemImageNamed:(id)arg1 shape:(long long)arg2 fill:(long long)arg3 withConfiguration:(id)arg4;
+ (id)_systemImageNamed:(id)arg1 variableValue:(double)arg2 withConfiguration:(id)arg3;
+ (id)_systemImageNamed:(id)arg1 variant:(unsigned long long)arg2;
+ (id)_systemImageNamed:(id)arg1 variant:(unsigned long long)arg2 withConfiguration:(id)arg3;
+ (id)_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)_systemImageNamed:(id)arg1 withConfiguration:(id)arg2 allowPrivate:(bool)arg3;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize { double x1; double x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6;
+ (id)actionsImage;
+ (id)addImage;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 duration:(double)arg3;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 resizingMode:(long long)arg3 duration:(double)arg4;
+ (id)checkmarkImage;
+ (id)imageAtPath:(id)arg1;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(bool)arg5;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 variableValue:(double)arg3 withConfiguration:(id)arg4;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 withConfiguration:(id)arg3;
+ (id)imageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (void)initialize;
+ (id)kitImageNamed:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)preferredSymbolImageNamed:(id)arg1;
+ (id)preferredSymbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithTextStyle:(id)arg3;
+ (id)preferredSymbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithTextStyle:(id)arg3 traitCollection:(id)arg4 inBundle:(id)arg5;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)removeImage;
+ (id)strokedCheckmarkImage;
+ (bool)supportsSecureCoding;
+ (id)symbolImageNamed:(id)arg1;
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithFont:(id)arg3;
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 compatibleWithFont:(id)arg3 traitCollection:(id)arg4 inBundle:(id)arg5;
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 weight:(long long)arg3 compatibleWithFontSize:(double)arg4;
+ (id)symbolImageNamed:(id)arg1 size:(long long)arg2 weight:(long long)arg3 compatibleWithFontSize:(double)arg4 traitCollection:(id)arg5 inBundle:(id)arg6;
+ (id)systemImageNamed:(id)arg1;
+ (id)systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)systemImageNamed:(id)arg1 variableValue:(double)arg2 withConfiguration:(id)arg3;
+ (id)systemImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (struct CGPDFPage { }*)_CGPDFPage;
- (struct CGSize { double x1; double x2; })_CGPDFPageSize;
- (struct CGSVGDocument { }*)_CGSVGDocument;
- (struct CGSize { double x1; double x2; })_CGSVGDocumentSize;
- (double)__baselineOffsetFromBottom;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2 idiom:(long long)arg3 scale:(double)arg4;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(bool)arg2 scale:(double)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(bool)arg2;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 allowImageResizing:(bool)arg4;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4;
- (id)_applyBackdropViewStyle:(long long)arg1 includeTints:(bool)arg2 includeBlur:(bool)arg3 graphicsQuality:(long long)arg4 allowImageResizing:(bool)arg5;
- (id)_asMenuElementImage;
- (id)_asMenuElementImageName;
- (id)_automaticSymbolConfiguration;
- (double)_baselineOffsetFromBottom;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateEdgeStatistics;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatisticsOfEdge:(bool)arg1;
- (bool)_canEncodeWithName:(id)arg1 coder:(id)arg2;
- (double)_capHeight;
- (id)_colorForFlattening;
- (id)_colorForName:(id)arg1 withTraitCollection:(id)arg2;
- (void)_configureImage:(id)arg1 assumePreconfigured:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentStretchInPixels;
- (struct __IOSurface { }*)_copyIOSurface;
- (id)_defaultConfiguration;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 alphaOnly:(bool)arg4;
- (void)_drawImageForLegibilityStyle:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (long long)_effectiveRenderingModeWithSymbolConfiguration:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (id)_flatImageWithColor:(id)arg1;
- (id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)_hasBaseline;
- (bool)_hasContentInsets;
- (bool)_hasExplicitAlignmentRectInsets;
- (bool)_hasExplicitBaseline;
- (bool)_hasExplicitContentInsets;
- (bool)_hasVisibleContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScale:(double)arg2;
- (void)_horizontallyFlipImageOrientation;
- (id)_identityDescription;
- (id)_imageByApplyingVariant:(unsigned long long)arg1 allowNone:(bool)arg2;
- (void)_imageByCreatingBitmapRepresentationWithCompletionHandler:(id /* block */)arg1;
- (id)_imageByResizingToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(double)arg2 alphaOnly:(bool)arg3;
- (id)_imageForLegibilityStyle:(long long)arg1;
- (long long)_imageOrientationConsideringRTL;
- (long long)_imageOrientationConsideringRTLForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_imagePaddedByInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_imagePreparedForScreen:(id)arg1;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_imageThatSuppressesAccessibilityHairlineThickening;
- (id)_imageTintedWithColor:(id)arg1 renderingMode:(long long)arg2 withUpdatedCGImage:(bool)arg3;
- (id)_imageWithBitmapRepresentation;
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(long long)arg1;
- (id)_imageWithContent:(id)arg1;
- (id)_imageWithContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_imageWithContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withUpdatedCGImage:(bool)arg2;
- (id)_imageWithImageAsset:(id)arg1;
- (id)_imageWithImageAsset:(id)arg1 configuration:(id)arg2;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_imageWithSize:(struct CGSize { double x1; double x2; })arg1 content:(id)arg2;
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;
- (id)_imageWithSymbolMetricsFromNamedVectorGlyph:(id)arg1;
- (id)_imageWithVariableValue:(double)arg1;
- (id)_initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (id)_initWithCGPDFPage:(struct CGPDFPage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)_initWithCGSVGDocument:(struct CGSVGDocument { }*)arg1;
- (id)_initWithCGSVGDocument:(struct CGSVGDocument { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)_initWithCompositedSymbolImageLayers:(id)arg1 name:(id)arg2;
- (id)_initWithCompositedSymbolImageLayers:(id)arg1 name:(id)arg2 alignUsingBaselines:(bool)arg3;
- (id)_initWithContent:(id)arg1 orientation:(long long)arg2;
- (id)_initWithContentsOfLCRFile:(id)arg1;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(bool)arg5;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2 cache:(bool)arg3;
- (id)_initWithData:(id)arg1 preserveScale:(bool)arg2 cache:(bool)arg3 scale:(double)arg4;
- (id)_initWithData:(id)arg1 scale:(double)arg2;
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2;
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3;
- (id)_initWithFilledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3 withName:(id)arg4;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(long long)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)_initWithOtherImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inverseAlignmentRectInsets;
- (bool)_isAlphaMask;
- (bool)_isCGImageOnly;
- (bool)_isCached;
- (bool)_isColoredSymbolImage;
- (bool)_isDecompressing;
- (bool)_isHierarchicalColorSymbolImage;
- (bool)_isInvisibleAndGetIsTranslucent:(bool*)arg1;
- (bool)_isMultiColorSymbolImage;
- (bool)_isNamed;
- (bool)_isPDFVector;
- (bool)_isRTLImage;
- (bool)_isResizable;
- (bool)_isSVGVector;
- (bool)_isSameSymbolImageExceptVariableValue:(id)arg1;
- (bool)_isSubimage;
- (bool)_isSymbolImage;
- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_metricsDescription;
- (void)_mirrorImageOrientation;
- (unsigned long long)_numberOfHierarchyLayers;
- (id)_outlinePath;
- (void)_preheatBitmapData;
- (void)_prepareForScreen:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_primitiveImageAsset;
- (bool)_probeIsSeeThrough;
- (id)_rasterizedImage;
- (void)_removeBaseline;
- (void)_removeBaselineExplicitly;
- (bool)_representsCIImageWhichSupportsIOSurfaceRendering;
- (bool)_representsLayeredImage;
- (id)_resizableImageWithCapMask:(int)arg1;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (double)_scaleFromPDF;
- (id)_serializedData;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAlignmentRectInsetsExplicitly:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAlwaysStretches:(bool)arg1;
- (void)_setBaselineOffsetFromBottom:(double)arg1;
- (void)_setBaselineOffsetFromBottomExplicitly:(double)arg1;
- (void)_setCached:(bool)arg1;
- (void)_setCapHeight:(double)arg1;
- (void)_setCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setColorForFlattening:(id)arg1;
- (void)_setConfiguration:(id)arg1;
- (void)_setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentInsetsExplicitly:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setImageAsset:(id)arg1;
- (void)_setIsFlippedInRightToLeft;
- (void)_setMidlineOffsetFromCenter:(double)arg1;
- (void)_setNamed:(bool)arg1;
- (void)_setRenderingMode:(long long)arg1;
- (void)_setSubimageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setSuppressesAccessibilityHairlineThickening:(bool)arg1;
- (void)_setSymbolMetricsFromNamedVectorGlyph:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeInPixels;
- (struct CGSize { double x1; double x2; })_sizeInPixelsFromPDF;
- (struct CGSize { double x1; double x2; })_sizeWithHairlineThickening:(bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_subimageInsets;
- (bool)_suppressesAccessibilityHairlineThickening;
- (id)_swizzleContent:(id)arg1;
- (struct CGColor { }*)_tiledPatternColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2;
- (void)compositeToPoint:(struct CGPoint { double x1; double x2; })arg1 operation:(int)arg2 fraction:(double)arg3;
- (void)compositeToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (id)configuration;
- (id)content;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fraction:(double)arg2 operation:(int)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fraction:(double)arg3;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(double)arg4;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)flattenedImageWithColor:(id)arg1;
- (bool)flipsForRightToLeftLayoutDirection;
- (bool)hasBaseline;
- (bool)hasContentInsets;
- (bool)hasMidline;
- (bool)hasPadding;
- (unsigned long long)hash;
- (id)imageAsset;
- (id)imageByAddingContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageByAddingPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageByApplyingSymbolConfiguration:(id)arg1;
- (id)imageByPreparingForDisplay;
- (id)imageByPreparingThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageFlippedForRightToLeftLayoutDirection;
- (long long)imageOrientation;
- (struct CGImage { }*)imageRef;
- (id)imageRendererFormat;
- (id)imageRestrictedToStandardDynamicRange;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageWithBaselineOffsetFromBottom:(double)arg1;
- (id)imageWithConfiguration:(id)arg1;
- (id)imageWithContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageWithHorizontallyFlippedOrientation;
- (id)imageWithMidlineOffsetFromCenter:(double)arg1;
- (id)imageWithPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)imageWithRenderingMode:(long long)arg1;
- (id)imageWithSymbolConfiguration:(id)arg1;
- (id)imageWithTintColor:(id)arg1;
- (id)imageWithTintColor:(id)arg1 renderingMode:(long long)arg2;
- (id)imageWithoutBaseline;
- (id)imageWithoutMidline;
- (id)images;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(long long)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 cache:(bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 cache:(bool)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (struct __IOSurface { }*)ioSurface;
- (bool)isEqual:(id)arg1;
- (bool)isFromStatusBarImageProvider;
- (bool)isHighDynamicRange;
- (bool)isSymbolImage;
- (long long)leftCapWidth;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (double)midlineOffsetFromCenter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)patternColor;
- (struct CGSize { double x1; double x2; })preferredPresentationSizeForItemProvider;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)prepareThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (long long)renderingMode;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizingMode:(long long)arg2;
- (long long)resizingMode;
- (double)scale;
- (void)setFlipsForRightToLeftLayoutDirection:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (id)symbolConfiguration;
- (long long)topCapHeight;
- (id)traitCollection;
- (double)variableValue;
- (bool)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)_avkit_imageLoadingQueue;
+ (id)_avkit_imageWithSize:(struct CGSize { double x1; double x2; })arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4;
+ (id)_avkit_textImageCache;
+ (id)avkit_flatWhiteResizableTemplateImage;
+ (void)avkit_imageNamed:(id)arg1 completion:(id /* block */)arg2;
+ (void)avkit_imageWithSize:(struct CGSize { double x1; double x2; })arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4 completion:(id /* block */)arg5;
+ (void)avkit_imageWithSymbolNamed:(id)arg1 font:(id)arg2 completion:(id /* block */)arg3;
+ (id)avkit_imageWithSymbolNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)avkit_loadedImageConfigurations;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)as_imageNamed:(id)arg1;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

+ (id)_numberForRenderingMode:(long long)arg1;
+ (long long)_renderingModeForNumber:(id)arg1;
+ (id)imageWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;

- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)cnui_actionTypeForTransportType:(long long)arg1;
+ (id)cnui_carPlayUserActionSymbolImageForActionType:(id)arg1;
+ (id)cnui_imageNamed:(id)arg1;
+ (id)cnui_imageWithDataPreservingScale:(id)arg1;
+ (id)cnui_roundedNavButtonPlatterImage;
+ (id)cnui_symbolImageForContactCardChevron;
+ (id)cnui_symbolImageForContactCardChevronWithColor:(id)arg1;
+ (id)cnui_symbolImageForContactCardMenuChevron;
+ (id)cnui_symbolImageForDynamicallySizedContactCardChevron;
+ (id)cnui_symbolImageForDynamicallySizedContactCardChevronWithColor:(id)arg1;
+ (id)cnui_symbolImageForNavigationListChevron;
+ (id)cnui_symbolImageForTransportType:(long long)arg1 withColor:(id)arg2;
+ (id)cnui_symbolImageForUnknownNumberContactCardChevron;
+ (id)cnui_symbolImageForUnknownNumberContactCardChevronWithColor:(id)arg1;
+ (id)cnui_symbolImageNamed:(id)arg1 scale:(long long)arg2 weight:(long long)arg3 withColor:(id)arg4 useFixedSize:(bool)arg5 compatibleWithTextStyle:(id)arg6;
+ (id)cnui_symbolImageNamed:(id)arg1 scale:(long long)arg2 withColor:(id)arg3 useFixedSize:(bool)arg4;
+ (id)cnui_symbolImageNamed:(id)arg1 scale:(long long)arg2 withColor:(id)arg3 useFixedSize:(bool)arg4 compatibleWithTextStyle:(id)arg5;
+ (id)cnui_templateImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)cnui_tintedImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)cnui_userActionOutlinedSymbolImageForActionType:(id)arg1 scale:(long long)arg2 withColor:(id)arg3;
+ (id)cnui_userActionSymbolImageForActionType:(id)arg1 scale:(long long)arg2 withColor:(id)arg3;
+ (id)cnui_userActionSymbolImageForActionType:(id)arg1 scale:(long long)arg2 withColor:(id)arg3 compatibleWithTextStyle:(id)arg4;

- (struct CGImage { }*)cnui_CGImageSnapshot;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_inui_imageWithLightModeImage:(id)arg1 darkModeImage:(id)arg2;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_createImageWithCGImage:(struct CGImage { }*)arg1;
+ (id)_lp_systemImageNamed:(id)arg1;

- (struct CGImage { }*)_lp_CGImage;
- (bool)_lp_hasTransparency;
- (id)_lp_imageByApplyingSymbolConfiguration:(id)arg1;
- (id)_lp_imageForcingUserInterfaceStyle:(long long)arg1;
- (bool)_lp_isSymbolImage;
- (bool)_lp_isTemplate;
- (struct CGSize { double x1; double x2; })_lp_pixelSize;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_imageFromVKImage:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_mapkit_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)_mapkit_liveTransitIndicatorImageApplyingColorForStatus:(long long)arg1 darkMode:(bool)arg2;
+ (id)_mapkit_liveTransitIndicatorImageUsingDarkMode:(bool)arg1;
+ (id)_mapkit_systemImageNamed:(id)arg1;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 nightMode:(bool)arg4;
+ (id)_mapkit_transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 scale:(double)arg3 withWidthPaddingMultiple:(double)arg4;

- (id)_mapkit_dimmedImage;
- (id)_mapkit_horizontallyFlippedImage;
- (id)_mapkit_imageWithAlpha:(double)arg1;
- (id)_mapkit_imageWithSymbolConfiguration:(id)arg1;
- (id)_mapkit_templateImageWithTintColor:(id)arg1;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(bool)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)artworkCatalogBackingFileURL;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithRoundedCornersOfRadius:(double)arg1;
- (id)imageWithShadow:(id)arg1;
- (id)initWithContentsOfExactFilePath:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)_mf_symbolConfigurationForView:(long long)arg1 imageSymbolType:(long long)arg2;
+ (id)_mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 imageSymbolType:(long long)arg5 traits:(unsigned int)arg6 maximumContentSizeCategory:(id)arg7;
+ (id)mf_assistantBarSystemImageNamed:(id)arg1;
+ (id)mf_cardIconImageFromImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;
+ (long long)mf_imageSymbolTypeForView:(long long)arg1;
+ (id)mf_imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)mf_imageWithImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)mf_largeContentSizeImageNamed:(id)arg1;
+ (double)mf_scaledImageLayoutValue:(double)arg1 forView:(long long)arg2;
+ (id)mf_symbolConfigurationForImageSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 traits:(unsigned int)arg5 maximumContentSizeCategory:(id)arg6;
+ (id)mf_symbolConfigurationForView:(long long)arg1;
+ (id)mf_symbolImageCapAtContentSizeCategoryForView:(long long)arg1;
+ (id)mf_symbolImageFontTextStyleForView:(long long)arg1;
+ (long long)mf_symbolImageScaleForView:(long long)arg1;
+ (long long)mf_symbolImageWeightForView:(long long)arg1;
+ (unsigned int)mf_symbolicTraitsForView:(long long)arg1;
+ (id)mf_systemImageNamed:(id)arg1 forView:(long long)arg2;
+ (id)mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4;
+ (id)mf_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 maximumContentSizeCategory:(id)arg5;
+ (id)mf_systemImageNamedNumberAware:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 weight:(long long)arg4 maximumContentSizeCategory:(id)arg5;

// Image: /System/Library/Frameworks/Messages.framework/Messages

- (id)__ms_HEICData;
- (id)__ms_PNGData;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

+ (id)_largePotWithSystemImageNamed:(id)arg1;
+ (id)largeColorPotForColor:(id)arg1;
+ (id)largeStrikeOutPot;
+ (id)largeUnderlinePot;
+ (id)smallColorPotForColor:(id)arg1 withAccessibilityLabel:(id)arg2;
+ (id)smallStrikeOutPot;
+ (id)smallUnderlinePot;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (id)_pk_imageNamed:(id)arg1;
+ (id)pk_UCBButtonImage;
+ (id)pk_ellipsisButtonImage;
+ (id)pk_emojiButtonImage;
+ (id)pk_handwritingToolLabelImage;
+ (id)pk_keyboardButtonImage;
+ (id)pk_plusButtonImage;
+ (id)pk_redoButtonImage;
+ (id)pk_returnKeyButtonImage;
+ (id)pk_shapeButtonImage;
+ (id)pk_textButtonImage;
+ (id)pk_undoButtonImage;

- (id)pk_imageRotated90DegreesClockwise:(bool)arg1;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)socialFrameworkImageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })wf_affineTransformForImageMirroringOrientation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })wf_affineTransformForImageOrientation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)wf_imageInIntrinsicOrientation;
- (struct CGSize { double x1; double x2; })wf_majorAxisOrientedSize;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akImageNamed:(id)arg1;
+ (id)ak_boldTextStyleImage;
+ (id)ak_colorSwatchPickerImageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 selected:(bool)arg3;
+ (id)ak_colorSwatchToolbarButtonImageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 selected:(bool)arg3;
+ (id)ak_italicTextStyleImage;
+ (id)ak_strikethroughTextStyleImage;
+ (id)ak_underlineTextStyleImage;

- (struct CGImage { }*)akCGImage;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)_circularImageFromIcon:(id)arg1 size:(double)arg2 scale:(double)arg3;
+ (id)aaui_imageFromColor:(id)arg1;
+ (id)addBackgroundForImage:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)circularImageForBundleID:(id)arg1 size:(double)arg2 scale:(double)arg3;
+ (id)circularImageFromCGImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (id)descriptorForDataclassWithSize:(double)arg1;
+ (id)imageForDataclassWithBundleID:(id)arg1;
+ (id)imageForDataclassWithType:(id)arg1;
+ (id)imageForTableUIWithType:(id)arg1;

- (id)_imageByCroppingCGImageToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_imageByCroppingCIImageToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageByCroppingToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

+ (id)ams_imageWithSystemSymbolName:(id)arg1;
+ (id)ams_systemChevronLeft;
+ (id)ams_systemChevronRight;

- (double)ams_aspectRatio;
- (id)ams_imageCroppedTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)ams_imageScaledTo:(double)arg1;
- (id)ams_imageWithRenderingMode:(long long)arg1;
- (id)ams_imageWithSymbolConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_imageNamed:(id)arg1;
+ (id)ak_imageWithColor:(id)arg1;

- (id)ak_copyScaledToSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)animatedImageWithAPNGRepresentation:(id)arg1;
+ (id)animatedImageWithHEICRepresentation:(id)arg1;
+ (id)animatedImageWithHEICSRepresentation:(id)arg1;
+ (id)avt_animatedImageWithDataRepresentation:(id)arg1 ofType:(id)arg2;

- (id)APNGRepresentation;
- (id)HEICRepresentation;
- (id)HEICSRepresentation;
- (id)avt_dataRepresentationForTypeIdentifier:(id)arg1;
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)arg1;
- (float)frameDelayInSeconds;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

+ (id)userInterfaceStyleSpecificImageInBundle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)cuik_drawImageWithSize:(struct CGSize { double x1; double x2; })arg1 drawBlock:(id /* block */)arg2;
+ (id)cuik_resizableImageFromOriginalImage:(id)arg1 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 resizingMode:(long long)arg3;
+ (id)cuik_stripedImageWithBackgroundColor:(struct CGColor { }*)arg1 stripeColor:(struct CGColor { }*)arg2 scale:(double)arg3;
+ (id)cuik_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;

- (id)cuik_imageWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)cuik_imageWithTintColor:(id)arg1;
- (id)cuik_imageWithTintColor:(id)arg1 asTemplate:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImageOrientation:(long long)arg1 andSize:(struct CGSize { double x1; double x2; })arg2;

- (bool)_isSRGB;
- (bool)adjustFitInSize:(struct CGSize { double x1; double x2; }*)arg1 normalizeOrientation:(bool)arg2;
- (id)bluredImageWithFlippedXAxis:(bool)arg1;
- (id)cropImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cropped16X9Image;
- (id)drawImageIntoSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 blendMode:(int)arg3 alpha:(float)arg4;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)extendedRangeSafeDrawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 opaque:(bool)arg2 scale:(float)arg3;
- (id)jfx_deepColorSafeImageDrawnInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)jfx_imageWithoutDeepColor;
- (id)jfx_renderedImageWithUpOrientation;
- (id)scaledImageEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (id)scaledImageWithMaxDimension:(double)arg1;
- (struct CGSize { double x1; double x2; })scaledSizeEqualOrSmallerThanSize:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2 normalizeOrientation:(bool)arg3;
- (struct CGSize { double x1; double x2; })scaledSized:(struct CGSize { double x1; double x2; })arg1 maintainAspectRatio:(bool)arg2;
- (id)tintedImage;

// Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices

+ (id)crsui_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)crsui_wallpaperImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1;
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 isFilled:(bool)arg2;
+ (id)abImageNamed:(id)arg1;
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)ckColorImageOfSize:(struct CGSize { double x1; double x2; })arg1 withColor:(id)arg2;
+ (id)ckImageNamed:(id)arg1;
+ (id)ckImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckTemplateImageNamed:(id)arg1;
+ (id)placeholderExtensionIcon;

- (id)__ck_ASTCRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })__ck_contentsCenter;
- (id)__ck_heicsImageData;
- (id)__ck_imageScaledToFillSize:(struct CGSize { double x1; double x2; })arg1;
- (id)__ck_imageWithOrientation:(long long)arg1;
- (id)__ck_imageWithTrimmedTransparency;
- (id)__ck_pngImageData;
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })arg1 framed:(bool)arg2;
- (bool)__ck_writePNGToFilePath:(id)arg1 error:(id*)arg2;
- (bool)__ck_writePNGToURL:(id)arg1 error:(id*)arg2;
- (bool)beginContentAccess;
- (id)ckImageWithTintColor:(id)arg1;
- (id)ck_imageCroppedToCircle;
- (void)decode;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)iconForInterfaceStyle:(long long)arg1;
- (bool)isContentDiscarded;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_imageNamed:(id)arg1;

- (id)cps_averageColorImage;
- (id)cps_imageWithNormalizedOrientation;
- (id)cps_resizedImageWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay

+ (id)cd_internalSystemName:(id)arg1 variableValue:(double)arg2 withConfiguration:(id)arg3;

- (double)cd_baselineOffsetFromBottom;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (id)ccuiAlphaOnlyImageForMaskImage;

// Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared

+ (id)etImageNamed:(id)arg1;
+ (id)etImageNamed:(id)arg1 inBundle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dc_aspectFitImageFrameForViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)dc_imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)dc_imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)dc_largeSystemImageNamed:(id)arg1;
+ (id)dc_orientationMetadataFromImageOrientation:(long long)arg1;
+ (id)dc_orientedImageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)dc_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;
+ (id)dc_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2;
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2 scale:(long long)arg3;
+ (id)dc_systemImageNamed:(id)arg1 scale:(long long)arg2;
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2;
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;

- (struct CGImage { }*)dc_CGImage;
- (id)dc_JPEGData;
- (id)dc_JPEGDataWithOrientation:(long long)arg1;
- (id)dc_imageDataWithUTType:(id)arg1;
- (id)dc_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (long long)dc_imageOrientation;
- (id)dc_imageWithFont:(id)arg1;
- (id)dc_imageWithFont:(id)arg1 scale:(long long)arg2;
- (id)dc_imageWithScale:(long long)arg1;
- (id)dc_imageWithTextStyle:(id)arg1;
- (id)dc_imageWithTextStyle:(id)arg1 scale:(long long)arg2;
- (id)dc_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (id)dc_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (id)dc_scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (id)_doc_imageFillNameForColorType:(long long)arg1 differentiateWithShapes:(bool)arg2;
+ (id)_doc_imageOutlineNameForColorType:(long long)arg1 differentiateWithShapes:(bool)arg2;
+ (id)_doc_tagImageForRenderingVariant:(unsigned long long)arg1 differentiateWithShapes:(bool)arg2 tagColorType:(long long)arg3;
+ (id)_doc_tagImageForRenderingVariant:(unsigned long long)arg1 differentiateWithShapes:(bool)arg2 tagColorType:(long long)arg3 renderedColor:(id)arg4;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (id)doc_averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

+ (id)blankImageOfSize:(struct CGSize { double x1; double x2; })arg1;

- (id)compositeImage:(id)arg1;
- (id)compositeImage:(id)arg1 blendMode:(int)arg2 alpha:(double)arg3;
- (id)imagesWithSpriteSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tintedImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (id)correctlyRotatedPNGData;
- (id)rightSideUpImage;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)fiui_imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)fiui_pixelImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkHostImageWithBundleIdentifier:(id)arg1 imageName:(id)arg2;
+ (void)_gkMessageGroupImageWithIdentifier:(id)arg1 handler:(id /* block */)arg2;

- (id)_gkCropImageIntoSquare:(struct CGSize { double x1; double x2; })arg1;
- (id)_gkImageWithProgress:(double)arg1 achievement:(id)arg2 isDetail:(bool)arg3;
- (id)_gkMaskImageWithProgress:(double)arg1 isDetail:(bool)arg2;
- (id)_gkQuestionMarkImage;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

+ (struct CGImage { }*)_gkCGImageWithPNGData:(id)arg1;
+ (id)_gkImageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_gkImageWithPNGData:(id)arg1;
+ (id)_gkImageWithPNGData:(id)arg1 scale:(double)arg2;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 rowBytes:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (struct CGImage { }*)_gkCGImage;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 padColor:(id)arg3;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (long long)_gkImageOrientation;
- (void)_gkReadAtSize:(struct CGSize { double x1; double x2; })arg1 ARGBHostEndianBytes:(id /* block */)arg2;
- (double)_gkScale;
- (id)circularClippedImage;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesUI.framework/HealthMenstrualCyclesUI

+ (id)_hkmcui_imageWithAssetName:(id)arg1;
+ (id)hkmc_fertilityProjectionImage;
+ (id)hkmc_fertilityProjectionImageHighContrast;
+ (id)hkmc_fertilityProjectionReversedImage;
+ (id)hkmc_menstruationProjectionHighImage;
+ (id)hkmc_menstruationProjectionHighImageHighContrast;
+ (id)hkmc_menstruationProjectionHighReversedImage;
+ (id)hkmc_menstruationProjectionLowImage;
+ (id)hkmc_menstruationProjectionLowImageHighContrast;
+ (id)hkmc_menstruationProjectionLowReversedImage;
+ (id)hkmc_ovulationDayImage;
+ (id)hkmc_ovulationDayImageHighContrast;
+ (id)hkmc_ovulationDayReversedImage;
+ (id)hkmc_ovulationEstimateImage;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)checkmarkSymbol;
+ (id)xmarkSymbol;

- (id)hr_imageWithWhiteBackground:(id*)arg1;
- (id)scaledToTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)scaledToTargetSize:(struct CGSize { double x1; double x2; })arg1 padding:(struct CGPoint { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_arrowExerciseImage;
+ (id)hk_arrowMoveImage;
+ (id)hk_arrowStandImage;
+ (id)hk_disclosureChevronImage;
+ (id)hk_hearingHealthAudioExposureSymbolForClassification:(unsigned long long)arg1 font:(id)arg2;
+ (id)hk_transparentInterfaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;

- (id)hk_croppedImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hk_resizedInterfaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)hk_scaledImageViewHeightWithScaledWidth:(double)arg1;
- (id)hk_watchIconImage;

// Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI

- (id)resizeHearingImageToNewSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (id)_watchImageName;
+ (id)hrui_ECGAppIconImage;
+ (id)hrui_ECGOnboardingWristImage;
+ (id)hrui_atrialFibrillationDetectionIllustrationImage;
+ (id)hrui_cannotDoImage;
+ (id)hrui_fingerCrownImage;
+ (id)hrui_heartRateIconImage;
+ (id)hrui_screenWidthImageWithName:(id)arg1;
+ (id)hrui_warningImage;
+ (id)hrui_watchIconImage;
+ (id)hrui_waveformImage;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_fetchImageFromURL:(id)arg1;
+ (id)hf_safetyAndSecurityImage;

- (struct CGSize { double x1; double x2; })hf_sizeInScreenScale;
- (id)imageWithNormalizedOrientation;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_airPlaySpeakerImage;
+ (id)hu_avatarImageWithSymbolNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 diameter:(double)arg4;
+ (id)hu_cameraErrorImage;
+ (id)hu_cellCheckmarkImage;
+ (id)hu_circleImageWithDiameter:(double)arg1;
+ (id)hu_closeButtonImage;
+ (id)hu_connectedCheckmarkImage;
+ (id)hu_exclamationMarkImage;
+ (id)hu_fastForwardButtonImage;
+ (id)hu_gearImageWithBadgeCount:(unsigned long long)arg1;
+ (id)hu_gearSymbolImageWithBadgeCount:(unsigned long long)arg1;
+ (id)hu_imageForDescriptionBadgeType:(unsigned long long)arg1 tintColor:(id)arg2;
+ (id)hu_largeQRBadgeTemplateImage;
+ (id)hu_largeSymbolConfiguration;
+ (id)hu_locationArrowTemplate;
+ (id)hu_microphoneGlyphForTalkingState:(bool)arg1 usingStandardSymbolConfiguration:(bool)arg2;
+ (id)hu_mutedMicrophoneImageInCircleWithTintColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)hu_mutedMicrophoneImageWithTintColor:(id)arg1;
+ (id)hu_navigationBarGlyphHouse;
+ (id)hu_navigationBarGlyphList;
+ (id)hu_navigationBarGlyphPlus;
+ (id)hu_navigationBarGlyphSize;
+ (id)hu_pauseButton;
+ (id)hu_playButton;
+ (id)hu_playButtonImageForAnnouncementPlaybackButton;
+ (id)hu_recordingButtonMicOffImage;
+ (id)hu_recordingButtonMicOnImage;
+ (id)hu_recordingButtonSendImage;
+ (id)hu_recordingButtonStopImage;
+ (id)hu_recordingButtonWaveformImage;
+ (id)hu_recordingDeleteButton;
+ (struct CGSize { double x1; double x2; })hu_scaleSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3;
+ (id)hu_semiboldSymbolConfiguration;
+ (id)hu_settingsImageUsingStandardSymbolConfiguration:(bool)arg1;
+ (id)hu_smallAirPlayAudioImage;
+ (id)hu_smallQRBadgeTemplateImage;
+ (id)hu_standardSymbolConfiguration;
+ (id)hu_stopButtonImage;
+ (id)hu_symbolForDevice:(id)arg1;
+ (id)hu_symbolFromProductPlatform:(id)arg1;
+ (id)hu_symbolNameForDescriptionBadgeType:(unsigned long long)arg1;
+ (id)hu_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5;
+ (id)hu_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5 configuration:(id)arg6;
+ (id)hu_walletAppIconImage;
+ (id)hu_waveformImage;

- (id)hu_imageScaledToSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

- (id)layerContentsForLayer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)mf_imageForChevronType:(long long)arg1;
+ (id)mui_imageFromSuggestionToken:(id)arg1;
+ (id)mui_imageWithSystemSymbolName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

+ (id)MCUIImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_customSymbolImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)_mapsui_resolvedSymbolImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)_mapsui_systemImageNamed:(id)arg1;
+ (id)_mapsui_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;

- (void)_mapsui_prepareThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

+ (id)mu_markupAppIcon;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })mt_edgeOutsetsForShadowProperties:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 scale:(double)arg2;
+ (id)mt_resizableShadowTemplateImageWithAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(bool)arg4 maskSize:(struct CGSize { double x1; double x2; })arg5;
+ (id)mt_shadowTemplateImageWithAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(bool)arg4 maskSize:(struct CGSize { double x1; double x2; })arg5 resizableCapInsets:(struct { double x1; double x2; double x3; double x4; }*)arg6;

- (id)_mt_imageWithShadowWithAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 userInterfaceStyle:(long long)arg2;
- (id)mt_imageWithDefaultShadowAttributesForUserIntefaceStyle:(long long)arg1;
- (id)mt_imageWithDefaultShadowAttributesForUserInterfaceStyle:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 fromBlock:(id /* block */)arg3;

- (id)scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)safari_currentDeviceImageNameForOrientation:(long long)arg1;
+ (id)sf_chicletStyleImageWithImage:(id)arg1 backgroundColor:(id)arg2 size:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 cornerRadius:(double)arg4;
+ (id)sf_imageNamed:(id)arg1;

- (bool)sf_hasRegisteredFaviconForDarkUserInterfaceStyle;
- (id)sf_initWithCGImage:(struct CGImage { }*)arg1 tabSnapshotEffectsVersion:(long long)arg2;
- (bool)sf_isLaunchImageSizedForOrientation:(long long)arg1 includesStatusBar:(bool*)arg2;
- (bool)sf_isMonogram;
- (void)sf_registerFaviconForDarkUserInterfaceStyle;
- (void)sf_registerFaviconForDarkUserInterfaceStyleWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)sf_setIsMonogram:(bool)arg1;
- (bool)sf_shouldApplyBackingForDarkBackdrop;
- (long long)sf_tabSnapshotEffectsVersion;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

+ (id)resizeImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)singlePointImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

+ (id)mtui_imageWithSymbolName:(id)arg1 font:(id)arg2 andTintColor:(id)arg3;
+ (id)mtui_imageWithSymbolName:(id)arg1 pointSize:(double)arg2;
+ (id)mtui_imageWithSymbolName:(id)arg1 pointSize:(double)arg2 color:(id)arg3;
+ (id)mtui_imageWithSymbolName:(id)arg1 scale:(long long)arg2 textStyle:(id)arg3 andTintColor:(id)arg4;
+ (id)mtui_imageWithSymbolName:(id)arg1 style:(id)arg2;
+ (id)mtui_sleepImage;
+ (id)mtui_wakeImage;

- (id)mtui_imageWithTintColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI

- (id)car_scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)newImageForScreenCorner:(unsigned long long)arg1 screenScale:(double)arg2 cornerRadius:(double)arg3;
+ (id)ntk_gossamer_nightMaskForDate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)ntk_pregossamer_nightMaskForDate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)ntk_solarTerminatorStrokeColor;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_UIImageFromCIImage:(id)arg1;
+ (id)ic_applicationIconImageWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_aspectFitImageFrameForViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)ic_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)ic_hierarchicalNonSystemImageNamed:(id)arg1 colors:(id)arg2 fontTextStyle:(id)arg3 scale:(long long)arg4 maxContentSizeCategory:(id)arg5;
+ (id)ic_hierarchicalSystemImageNamed:(id)arg1 colors:(id)arg2 fontTextStyle:(id)arg3 scale:(long long)arg4 maxContentSizeCategory:(id)arg5;
+ (id)ic_imageNamed:(id)arg1 withTint:(id)arg2;
+ (id)ic_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)ic_imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)ic_imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)ic_imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)ic_imageWithContentsOfURL:(id)arg1;
+ (id)ic_imageWithData:(id)arg1;
+ (id)ic_largeScaleHierarchicalSystemImageNamed:(id)arg1 colors:(id)arg2;
+ (id)ic_largeScaleHierarchicalSystemImageNamed:(id)arg1 colors:(id)arg2 fontTextStyle:(id)arg3;
+ (id)ic_largeScaleHierarchicalSystemImageNamed:(id)arg1 colors:(id)arg2 fontTextStyle:(id)arg3 maxContentSizeCategory:(id)arg4;
+ (id)ic_largeSystemImageNamed:(id)arg1;
+ (id)ic_orientationMetadataFromImageOrientation:(long long)arg1;
+ (id)ic_orientedImageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)ic_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;
+ (id)ic_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;
+ (id)ic_scaledHierarchicalSystemImageNamed:(id)arg1 scale:(long long)arg2 colors:(id)arg3;
+ (id)ic_smallSystemImageNamed:(id)arg1;
+ (id)ic_symbolsNeedingPrivateCatalog;
+ (id)ic_systemImageNamed:(id)arg1;
+ (id)ic_systemImageNamed:(id)arg1 fromFont:(id)arg2;
+ (id)ic_systemImageNamed:(id)arg1 fromFont:(id)arg2 scale:(long long)arg3;
+ (id)ic_systemImageNamed:(id)arg1 pointSize:(double)arg2;
+ (id)ic_systemImageNamed:(id)arg1 pointSize:(double)arg2;
+ (id)ic_systemImageNamed:(id)arg1 pointSize:(double)arg2 weight:(long long)arg3;
+ (id)ic_systemImageNamed:(id)arg1 scale:(long long)arg2;
+ (id)ic_systemImageNamed:(id)arg1 textStyle:(id)arg2;
+ (id)ic_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (id)ic_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 maxContentSizeCategory:(id)arg4;
+ (id)ic_systemImageNamed:(id)arg1 usePrivateCatalog:(bool)arg2;
+ (id)symbolImageConfigurationWithTextStyle:(id)arg1 scale:(long long)arg2 maxContentSizeCategory:(id)arg3;

- (struct CGImage { }*)ic_CGImage;
- (id)ic_JPEGData;
- (id)ic_JPEGDataWithOrientation:(long long)arg1;
- (id)ic_PDFData;
- (id)ic_PNGData;
- (id)ic_PNGDataWithOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_cropRectZeroAlpha;
- (id)ic_decodeInBackground;
- (void)ic_decodeWithCompletion:(id /* block */)arg1;
- (id)ic_horizontallyMirroredImage;
- (id)ic_imageCenteredWithBackgroundColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)ic_imageCenteredWithBackgroundColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (id)ic_imageDataWithUTType:(id)arg1;
- (id)ic_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)ic_imageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)ic_imageOrientation;
- (id)ic_imageWithBackgroundColor:(id)arg1;
- (id)ic_imageWithFont:(id)arg1;
- (id)ic_imageWithFont:(id)arg1 cappedToSize:(double)arg2;
- (id)ic_imageWithFont:(id)arg1 scale:(long long)arg2;
- (id)ic_imageWithScale:(long long)arg1;
- (id)ic_imageWithTextStyle:(id)arg1;
- (id)ic_imageWithTextStyle:(id)arg1 scale:(long long)arg2;
- (id)ic_imageWithTint:(id)arg1;
- (id)ic_imageWithTint:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct CGContext { }*)ic_newARGB8BitmapContextFromImage:(struct CGImage { }*)arg1;
- (id)ic_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (id)ic_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (id)ic_scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

+ (id)pbui_imageFromSceneSnapshot:(id)arg1;
+ (id)pbui_imageSnapshotFromLayer:(id)arg1 buffer:(struct __IOSurface { }*)arg2;
+ (id)pbui_imageWithIOSurface:(id)arg1;
+ (id)pbui_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)pbui_thumbnailImageForImage:(id)arg1;

- (id)pbui_CGImageBackedImage;
- (id)pbui_CGImageBackedImageUsingDataProvider;
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(bool)arg2;
- (long long)pbui_EXIFOrientation;
- (struct CGColorSpace { }*)pbui_colorSpace;
- (id)pbui_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2;
- (id)pbui_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 canUseIOSurface:(bool)arg3;
- (id)pbui_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3;
- (id)pbui_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3 canUseIOSurface:(bool)arg4;
- (id)pbui_imageByManipulatingInDeviceColorSpaceWithBlock:(id /* block */)arg1;
- (id)pbui_imageHashData;
- (id)pbui_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)pbui_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1 preservingAspectRatio:(bool)arg2;
- (id)pbui_resizedImageForCurrentMagnifyMode;
- (id)pbui_scaleImage:(double)arg1;
- (id)pbui_scaleImage:(double)arg1 canUseIOSurface:(bool)arg2;
- (id)wrappedIOSurface;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)imageWithPKImage:(id)arg1;
+ (id)pkui_imageWithColor:(id)arg1;
+ (id)pkui_imageWithColor:(id)arg1 scale:(double)arg2;

- (struct CGSize { double x1; double x2; })pkui_alignmentSize;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3; })pkui_alignmentSizeThatFills:(struct CGSize { double x1; double x2; })arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3; })pkui_alignmentSizeThatFills:(struct CGSize { double x1; double x2; })arg1 maximumScale:(double)arg2;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3; })pkui_alignmentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; double x3; })pkui_alignmentSizeThatFits:(struct CGSize { double x1; double x2; })arg1 maximumScale:(double)arg2;
- (id)pkui_imageOverlaidWithColor:(id)arg1;
- (id)pkui_imageWithAlpha:(double)arg1;
- (id)pkui_resizableImageByTilingCenterPixel;
- (id)pkui_resizableImageByTilingHorizontally;
- (id)pkui_resizableImageByTilingVertically;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (bool)PG_wantsVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)pr_imageWithCGImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

- (id)pr_circleImageOfDiameter:(double)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)pr_circleImageWithCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)pr_imageRef;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;
+ (id)px_imageFromSolidColor:(id)arg1;
+ (id)px_imageNamed:(id)arg1;
+ (id)px_imageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)px_playOverlayImage:(unsigned long long)arg1;
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;
+ (id)px_roundedCornerMaskImage:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)px_systemImageNamed:(id)arg1;
+ (id)px_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;

- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;
- (id)px_backdropImageWithStyle:(long long)arg1;
- (id)px_debugImageWithStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2;
- (id)px_debugImageWithStrokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 text:(id)arg3;
- (void)px_drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContentMode:(long long)arg2;
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint { double x1; double x2; })arg1 inViewportWithSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 asynchronously:(bool)arg5 handler:(id /* block */)arg6;
- (id)px_imageByApplyingAlpha:(double)arg1;
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)px_imageByCroppingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)px_imageByCroppingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pixelTargetSize:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
- (id)px_imageWithDebugRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)px_isLargerThan:(id)arg1;
- (struct CGSize { double x1; double x2; })px_pixelSize;
- (id)px_predrawnImage;
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2 backgroundInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)px_tintedImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)pu_centeredImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)pu_imageFromView:(id)arg1 isOpaque:(bool)arg2;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8;
+ (id)pu_imageWithIconImage:(id)arg1 iconImageColor:(id)arg2 text:(id)arg3 font:(id)arg4 textColor:(id)arg5 fillColor:(id)arg6 strokeColor:(id)arg7 cornerRadius:(double)arg8 inset:(struct CGPoint { double x1; double x2; })arg9;
+ (id)pu_imageWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 fillColor:(id)arg4 strokeColor:(id)arg5 cornerRadius:(double)arg6;

- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentMode:(long long)arg3 asynchronously:(bool)arg4 handler:(id /* block */)arg5;
- (id)pu_overlayedImageWithColor:(id)arg1;
- (id)pu_tintedImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (id)backCatalogIconForDarkBackground:(bool)arg1;
+ (id)backCatalogIconForTheme:(id)arg1;
+ (id)backCatalogIconForTintColor:(id)arg1;
+ (id)backCatalogPartiallyPlayedIconForDarkBackground:(bool)arg1;
+ (id)backCatalogPartiallyPlayedIconForTheme:(id)arg1;
+ (id)backCatalogPartiallyPlayedIconForTintColor:(id)arg1;
+ (id)colorSliceImageWithColor:(id)arg1 height:(double)arg2;
+ (id)combineImages:(id)arg1 rowCount:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 border:(bool)arg4;
+ (id)defaultPodcastArtwork;
+ (id)defaultPodcastArtworkWithWidth:(double)arg1;
+ (void)drawBorder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2;
+ (id)halfPlayedIcon;
+ (id)halfPlayedIconForDarkBackground:(bool)arg1;
+ (id)halfPlayedIconForTheme:(id)arg1;
+ (id)image:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withBacking:(id)arg3;
+ (id)image:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withBacking:(id)arg3 opaque:(bool)arg4 scale:(double)arg5;
+ (id)imageWithSolidColor:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)infoIcon;
+ (id)makeDottedLineImageinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)multiCheckIcon;
+ (id)multiUncheckIcon;
+ (bool)needsLocaleAwareNumbersWorkaroundForSymbol:(id)arg1;
+ (id)nowPlayingIcon;
+ (id)nowPlayingIconPaused;
+ (id)playedIcon;
+ (id)roundedCornerRectangleWithColor:(id)arg1;
+ (id)roundedCornerRectangleWithColorNoTemplate:(id)arg1;
+ (id)scaledImageWithData:(id)arg1;
+ (id)systemImageNamedNumberAware:(id)arg1;
+ (id)systemImageNamedNumberAware:(id)arg1 config:(id)arg2;
+ (id)uncachedImageNamed:(id)arg1;
+ (id)unplayedIcon;
+ (id)unplayedIconForDarkBackground:(bool)arg1;
+ (id)unplayedIconForTheme:(id)arg1;

- (unsigned long long)colorAtPixelX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)debugShowInKeyWindow;
- (void)dumpAsPNGToCachesNamed:(id)arg1;
- (id)im_flatImageWithColor:(id)arg1;
- (id)im_imageWithBackgroundColor:(id)arg1;
- (id)imageByRemovingPath:(id)arg1;
- (id)imageMaskWithColor:(id)arg1;
- (id)imageWithComposite:(id)arg1 blendMode:(int)arg2;
- (id)imageWithComposite:(id)arg1 blendMode:(int)arg2 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)imageWithCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageWithGradientAngle:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (id)imageWithMaxBounds:(struct CGSize { double x1; double x2; })arg1;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 preserveAspectRatio:(bool)arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 resizeOptions:(int)arg2;
- (id)imageWithTint:(id)arg1;
- (id)imageWithWidth:(double)arg1 leftCapWidth:(long long)arg2;
- (id)imageWithWidth:(double)arg1 leftCapWidth:(long long)arg2 rightCapWidth:(long long)arg3;
- (id)mirroredImage;
- (id)scaleToSize:(struct CGSize { double x1; double x2; })arg1 addBorder:(bool)arg2;
- (id)squareImage;
- (id)stretchableMirroredImage;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_galleryHeroSnapshotForExtension:(id)arg1 descriptorIdentifier:(id)arg2 displayContext:(id)arg3;
+ (id)pbf_galleryPosterWithColor:(id)arg1 scale:(double)arg2;

- (id)pbf_alphaOnlyImage;
- (id)pbf_colorOfImage;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (id)circleImageWithDiameter:(double)arg1 color:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

+ (id)_ps_imageWithContentsOfCPBitmapFile:(id)arg1 scale:(double)arg2;
+ (id)psui_silhouetteImage;

// Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices

- (id)rms_jpegDataScaledToSize:(struct CGSize { double x1; double x2; })arg1 compressionQuality:(float)arg2;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_imageWithSVGData:(id)arg1;
+ (id)safari_imageWithSize:(struct CGSize { double x1; double x2; })arg1 actions:(id /* block */)arg2;
+ (id)safari_imageWithSize:(struct CGSize { double x1; double x2; })arg1 flipped:(bool)arg2 actions:(id /* block */)arg3;

- (double)safari_computeAverageLuminance;
- (bool)safari_isGrayscale;
- (bool)safari_isSVGImage;
- (id)safari_makeGrayscale;
- (void)safari_setTransparencyAnalysisResult:(long long)arg1;
- (long long)safari_transparencyAnalysisResult;
- (bool)safari_transparencyAnalysisResultIsNotOpaque;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (id)blankIcon;
+ (id)blankSpaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)iconWithAppBundleID:(id)arg1;
+ (id)iconWithAppURL:(id)arg1;
+ (id)st_pointImageOfColor:(id)arg1;

- (id)iconFromPrecomposedImage:(bool)arg1 platform:(short)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

+ (id)ss_cgImageBackedImageFromImageSurface:(id)arg1;
+ (id)ss_imageFromImageSurface:(id)arg1;

- (id)ss_CGImageBacked;
- (id)ss_imageSurfaceFromImage;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

+ (id)agif_animatedImageWithAnimatedGIFData:(id)arg1;
+ (id)agif_animatedImageWithAnimatedGIFURL:(id)arg1;
+ (id)agif_animatedImageWithImageInfo:(id)arg1;

- (id)sts_imageWithScalingFactor:(double)arg1;
- (id)sts_nonAlphaImage;

// Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisUI.framework/SensitiveContentAnalysisUI

+ (id)scImageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_bulletImage;
+ (id)skui_imageNamed:(id)arg1 bundle:(id)arg2 imageDescriptor:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings

+ (id)dbs_maxSliderImage;
+ (id)dbs_minSliderImage;

// Image: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)compositedImageWithSize:(struct CGSize { double x1; double x2; })arg1 images:(id)arg2 cornerRadius:(double)arg3 blendMode:(int)arg4 legacyMode:(bool)arg5;
+ (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2 actions:(id /* block */)arg3;
+ (id)smm_systemImageNamed:(id)arg1;
+ (id)smm_systemImageNamed:(id)arg1 withConfiguration:(id)arg2;

- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI

+ (id)sfui_bulletImageWithSystemName:(id)arg1 color:(id)arg2;
+ (id)sfui_imageNamed:(id)arg1;
+ (struct CGSize { double x1; double x2; })sfui_scaleSize:(struct CGSize { double x1; double x2; })arg1 toSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3;
+ (id)sfui_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5;
+ (id)sfui_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5 configuration:(id)arg6;

- (id)sfui_imageScaledToSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_semiTransparentChevronImage;
+ (id)siriui_semiTransparentChevronImageAndAllowNaturalLayout:(bool)arg1;
+ (id)siriui_semiTransparentChevronImageWithColor:(id)arg1 allowNaturalLayout:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (long long)UIImageOrientationForExifOrientation:(long long)arg1;
+ (id)animatedImageAtURL:(id)arg1;
+ (id)decompressedDeviceImageWithCGImage:(struct CGImage { }*)arg1 opaque:(bool)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize { double x1; double x2; })arg2 opaque:(bool)arg3 scale:(double)arg4;

- (id)applyBlurDarkEffect;
- (id)applyBlurExtraLightEffect;
- (id)applyBlurLightEffect;
- (id)applyBlurTintEffectWithColor:(id)arg1;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)centerImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)decompressedDeviceImage:(bool)arg1;
- (id)imageWithAdjustedOrientation:(long long)arg1 andResolution:(unsigned long long)arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 andCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2 scale:(double)arg3;
- (id)imageWithTransparentInset:(double)arg1;
- (struct CGImage { }*)newBorderMask:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (struct CGImageSource { }*)_newSource;
- (struct CGImage { }*)_newThumbnailWithImageSource:(struct CGImageSource { }*)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImage { }*)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (void)_sbSetAssociatedAssetManager:(id)arg1;
- (id)_thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isAnimated;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)sbs_hasAlpha;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (unsigned long long)sbf_bytesNeededForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withContextType:(long long)arg3;
+ (id)sbf_imageFromBGRAContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace { }*)arg3 withAlpha:(bool)arg4 pool:(id)arg5 drawing:(id /* block */)arg6 encapsulation:(id /* block */)arg7;
+ (id)sbf_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(id /* block */)arg5;
+ (id)sbf_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(id /* block */)arg5 encapsulation:(id /* block */)arg6;
+ (id)sbf_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (id)sbf_ATXSafeCGImageBackedImage;
- (id)sbf_CGImageBackedImage;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(bool)arg2;
- (long long)sbf_EXIFOrientation;
- (struct CGColorSpace { }*)sbf_colorSpace;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 canUseIOSurface:(bool)arg3;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3;
- (id)sbf_cropImageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 preservingAspectRatio:(bool)arg3 canUseIOSurface:(bool)arg4;
- (id)sbf_downscaledImageByDrawingIntoContextOfType:(long long)arg1 downscaleFactor:(double)arg2;
- (id)sbf_imageByConvertingToColorSpace:(struct CGColorSpace { }*)arg1 type:(long long)arg2;
- (id)sbf_imageByDrawingIntoContextOfType:(long long)arg1;
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(id /* block */)arg1;
- (id)sbf_imageByTilingCenterPixel;
- (id)sbf_imageHashData;
- (id)sbf_imageUsingContextType:(long long)arg1;
- (id)sbf_memoryMappedImageWithPool:(id)arg1;
- (id)sbf_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)sbf_resizeImageToSize:(struct CGSize { double x1; double x2; })arg1 preservingAspectRatio:(bool)arg2;
- (id)sbf_resizedImageForCurrentMagnifyMode;
- (id)sbf_scaleImage:(double)arg1;
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id)sbui_legibilityImageForSettings:(id)arg1 scale:(double)arg2 inputImage:(id)arg3 inputSize:(struct CGSize { double x1; double x2; })arg4 allowMinFillHeightHack:(bool)arg5 strength:(double*)arg6 type:(long long)arg7 pool:(id)arg8;
+ (id)sbui_legibilityImageForSettings:(id)arg1 scale:(double)arg2 inputImage:(id)arg3 inputSize:(struct CGSize { double x1; double x2; })arg4 allowMinFillHeightHack:(bool)arg5 type:(long long)arg6 pool:(id)arg7;
+ (id)sbui_legibilityImageForSettings:(id)arg1 scale:(double)arg2 inputImage:(id)arg3 inputSize:(struct CGSize { double x1; double x2; })arg4 type:(long long)arg5 pool:(id)arg6;

- (id)sbui_legibilityImageForSettings:(id)arg1 scale:(double)arg2 pool:(id)arg3;
- (id)sbui_strikeImageForLegibilitySettings:(id)arg1 strength:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3 type:(long long)arg4 pool:(id)arg5;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)resizeImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)singlePointImageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (bool)isFromStatusBarImageProvider;

// Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore

- (id)rms_jpegDataScaledToSize:(struct CGSize { double x1; double x2; })arg1 compressionQuality:(float)arg2;

// Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI

+ (id)tvrui_symbolImageWithName:(id)arg1 font:(id)arg2 fontSize:(double)arg3 weight:(long long)arg4 scale:(long long)arg5 maxPointSize:(double)arg6;
+ (id)tvrui_symbolImageWithName:(id)arg1 font:(id)arg2 scale:(long long)arg3;
+ (id)tvrui_symbolImageWithName:(id)arg1 fontSize:(double)arg2 weight:(long long)arg3 scale:(long long)arg4;
+ (id)tvrui_symbolImageWithName:(id)arg1 textStyle:(id)arg2 weight:(long long)arg3 scale:(long long)arg4 maxPointSize:(double)arg5;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_bookmark;
+ (id)ts_bookmarkFill;
+ (id)ts_bookmarkFillForHUD;
+ (id)ts_checkmark;
+ (id)ts_checkmarkCircleFill;
+ (id)ts_checkmarkCircleFillWhite;
+ (id)ts_checkmarkCircleOnGrayFill;
+ (id)ts_checkmarkCircleOpaqueFillOnPink;
+ (id)ts_checkmarkCircleTertiaryFillOnPink;
+ (id)ts_checkmarkForHUD;
+ (id)ts_chevronRight;
+ (id)ts_circleFill;
+ (id)ts_disclosureIndicator;
+ (id)ts_ellipsis;
+ (id)ts_ellipsisCircle;
+ (id)ts_ellipsisCircleFill;
+ (id)ts_ellipsisCircleFillWhite;
+ (id)ts_ellipsisCirclePinkOnTertiaryFill;
+ (id)ts_ellipsisCircleTertiaryFillOnPink;
+ (id)ts_ellipsisCircleWhite;
+ (id)ts_exclamationMarkCircle;
+ (id)ts_filledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3;
+ (id)ts_filledSystemImageNamed:(id)arg1 fillColor:(id)arg2 symbolColor:(id)arg3 symbolConfig:(id)arg4;
+ (id)ts_handRaised;
+ (id)ts_handRaisedFill;
+ (id)ts_handRaisedFillForHUD;
+ (id)ts_handRaisedSlash;
+ (id)ts_handRaisedSlashFill;
+ (id)ts_handThumbsDown;
+ (id)ts_handThumbsDownFill;
+ (id)ts_handThumbsDownFillForHUD;
+ (id)ts_handThumbsUp;
+ (id)ts_handThumbsUpFill;
+ (id)ts_handThumbsUpFillForHUD;
+ (id)ts_heartCircle;
+ (id)ts_heartCircleFill;
+ (id)ts_heartCirclePinkOnTertiaryFill;
+ (id)ts_heartCircleTertiaryFillOnPink;
+ (id)ts_heartFill;
+ (id)ts_iCloudAndArrowDown;
+ (id)ts_internalSystemImageNamed:(id)arg1;
+ (id)ts_internalSystemImageNamed:(id)arg1 withConfiguration:(id)arg2;
+ (id)ts_link;
+ (id)ts_macSidebar;
+ (id)ts_minusCircle;
+ (id)ts_minusCircleFill;
+ (id)ts_minusCircleFillWhite;
+ (id)ts_minusCircleOpaqueFillOnRed;
+ (id)ts_minusCircleTertiaryFillOnPink;
+ (id)ts_navigationVerticalColumnShadow;
+ (id)ts_noSign;
+ (id)ts_plus;
+ (id)ts_plusCircle;
+ (id)ts_plusCircleFill;
+ (id)ts_plusCirclePinkOnGrayFill;
+ (id)ts_plusCirclePinkOnOpaqueFill;
+ (id)ts_plusCirclePinkOnTertiaryFill;
+ (id)ts_plusCircleWhite;
+ (id)ts_rightArrow;
+ (id)ts_safari;
+ (id)ts_sidebarLeft;
+ (id)ts_squareAndArrowUp;
+ (id)ts_textFormatSize;
+ (id)ts_trash;
+ (id)ts_xmark;
+ (id)ts_xmarkCircle;
+ (id)ts_xmarkForHUD;

- (id)ts_imageThatSuppressesAccessibilityHairlineThickening;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)_tpImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)bluetoothAudioRouteGlyphForDisplayStyle:(long long)arg1;
+ (bool)cappedSizedImagesAreValid;
+ (id)carplayRouteGlyphForDisplayStyle:(long long)arg1;
+ (void)clearCachedCappedSizeImagesIfNeeded;
+ (id)currentDeviceRouteGlyphForDisplayStyle:(long long)arg1;
+ (id)customImageNameForSymbolType:(long long)arg1;
+ (long long)fallbackSymbolTypeForCurrentDevice;
+ (id)favoritesAudioGlyphImage;
+ (id)favoritesGlyphForSymbolType:(long long)arg1;
+ (id)favoritesMailGlyphImage;
+ (id)favoritesMessageGlyphImage;
+ (id)favoritesTTYDirectGlyphImage;
+ (id)favoritesTTYRelayGlyphImage;
+ (id)favoritesVideoGlyphImage;
+ (id)flatImageForSymbolType:(long long)arg1;
+ (id)genericBusinessLogo;
+ (id)headphonesRouteGlyphForDisplayStyle:(long long)arg1;
+ (id)hierarchicalImageForSymbolType:(long long)arg1 color:(id)arg2;
+ (bool)isCustomSymbol:(long long)arg1;
+ (id)muteRouteGlyphForDisplayStyle:(long long)arg1;
+ (id)recentsGlyphForSymbolType:(long long)arg1;
+ (id)recentsIncomingAudioCallGlyphImage;
+ (id)recentsIncomingVideoCallGlyphImage;
+ (id)recentsOutgoingAudioCallGlyphImage;
+ (id)recentsOutgoingVideoCallGlyphImage;
+ (id)recentsRTTChevronImage;
+ (id)recentsTTYDirectGlyphImage;
+ (id)recentsTTYGlyphImage;
+ (id)recentsTTYRelayGlyphImage;
+ (id)recentsVerifiedCheckmarkImage;
+ (id)routeGlyphForDeviceType:(long long)arg1 displayStyle:(long long)arg2;
+ (id)routeGlyphForDeviceType:(long long)arg1 displayStyle:(long long)arg2 color:(id)arg3;
+ (id)routeGlyphWithSymbolType:(long long)arg1 displayStyle:(long long)arg2;
+ (id)routeGlyphWithSymbolType:(long long)arg1 displayStyle:(long long)arg2 color:(id)arg3;
+ (long long)scaleForTPScale:(long long)arg1;
+ (bool)shouldBeHierarchicalSymbolType:(long long)arg1;
+ (id)speakerRouteGlyphForDisplayStyle:(long long)arg1;
+ (id)symbolNameForCurrentDevice;
+ (id)systemImageNameForSymbolType:(long long)arg1;
+ (id)telephonyUIActionButtonGlyphImage;
+ (id)telephonyUIImageNamed:(id)arg1;
+ (id)telephonyUIInfoButtonGlyphImage;
+ (id)telephonyUIUnreadIndicatorGlyphImage;
+ (id)tpHierarchicalImageForSymbolType:(long long)arg1 pointSize:(double)arg2;
+ (id)tpHierarchicalImageForSymbolType:(long long)arg1 pointSize:(double)arg2 scale:(long long)arg3;
+ (id)tpImageForSymbolType:(long long)arg1 configuration:(id)arg2;
+ (id)tpImageForSymbolType:(long long)arg1 pointSize:(double)arg2;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 cappedAt:(id)arg3;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 hierarchicalColor:(id)arg4 isStaticSize:(bool)arg5;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 isStaticSize:(bool)arg4;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 paletteColors:(id)arg4 isStaticSize:(bool)arg5;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 symbolWeight:(long long)arg4;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)videoMessageRecordGlyphImage;
+ (id)videoMessageSensitiveGlyphImage;
+ (id)videoMessageUnreadGlyphImage;
+ (id)voicemailAudioRouteGlyphImage;
+ (id)voicemailDeleteGlyphImage;
+ (id)voicemailDialRequestGlyphImage;
+ (id)voicemailGlyphForSymbolType:(long long)arg1;
+ (id)voicemailPauseGlyphDisabledImage;
+ (id)voicemailPauseGlyphImage;
+ (id)voicemailPlayGlyphDisabledImage;
+ (id)voicemailPlayGlyphImage;
+ (id)voicemailReportFeedbackGlyphImage;
+ (id)voicemailTTYGlyphImage;
+ (id)voicemailUndeleteGlyphImage;

- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithShadow:(id)arg1;
- (id)tpFlattenedWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

+ (id)tf_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TipKitLegacy.framework/TipKitLegacy

+ (id)tipKitSiriIconWithTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI

+ (id)_systemName:(id)arg1;
+ (id)tipsAppHomeScreenIcon;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)initializeJSContext:(id)arg1;

- (id)CGImageRef;
- (double)aspectRatio;
- (id)bounds;
- (id)colorPattern;
- (id)cropImageToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)height;
- (id)resizableImage:(id)arg1 :(long long)arg2;
- (double)width;
- (id)withConfiguration:(id)arg1;
- (id)withRenderingMode:(long long)arg1;
- (id)withTintColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)nc_imageFromPDFWithFileURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)nc_imageWithPDDocument:(struct CGPDFDocument { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/UserSafetyUI.framework/UserSafetyUI

+ (id)usImageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)imageForPlaceholderURL:(id)arg1;
+ (id)imageWithColor:(id)arg1;
+ (unsigned long long)vui_bytesNeededForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withContextType:(int)arg3;
+ (id)vui_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id /* block */)arg5;
+ (id)vui_imageFromContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(id /* block */)arg5 encapsulation:(id /* block */)arg6;
+ (id)vui_videosUIImageNamed:(id)arg1;

- (id)vui_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)vui_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1 radius:(double)arg2;
- (id)vui_iconImageOfSize:(struct CGSize { double x1; double x2; })arg1 radius:(double)arg2 stroke:(double)arg3;
- (id)vui_imageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)vuiImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)vuiImageWithCGImage:(struct CGImage { }*)arg1;
+ (id)vuiSystemImageNamed:(id)arg1 withConfiguration:(id)arg2 accessibilityDescription:(id)arg3;

- (struct CGImage { }*)vuiCGImage;
- (id)vuiJPEGRepresentation;
- (id)vuiPNGRepresentation;
- (id)vuiTemplateImage;
- (id)vui_imageWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_UIImageFromCIImage:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vk_aspectFitImageFrameForViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)vk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2;
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)vk_imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)vk_imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)vk_imageWithCIImage:(id)arg1;
+ (id)vk_imageWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)vk_imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)vk_imageWithContentsOfURL:(id)arg1;
+ (id)vk_imageWithData:(id)arg1;
+ (id)vk_orientationMetadataFromImageOrientation:(long long)arg1;
+ (id)vk_orientedImageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)vk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;
+ (id)vk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;
+ (id)vk_symbolImageWithName:(id)arg1;

- (id)vk_HEICData;
- (id)vk_HEICDataLossless;
- (id)vk_HEICDataWithCompressionQuality:(double)arg1;
- (id)vk_HEICDataWithCompressionQuality:(double)arg1 orientation:(long long)arg2;
- (id)vk_JPEGData;
- (id)vk_JPEGDataWithOrientation:(long long)arg1;
- (id)vk_PNGData;
- (id)vk_PNGDataWithOrientation:(long long)arg1;
- (struct CGImage { }*)vk_cgImage;
- (struct CGImage { }*)vk_cgImageGeneratingIfNecessary;
- (unsigned int)vk_cgImagePropertyOrientation;
- (id)vk_ciImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vk_cropRectZeroAlpha;
- (id)vk_decodeInBackground;
- (void)vk_decodeWithCompletion:(id /* block */)arg1;
- (id)vk_horizontallyMirroredImage;
- (id)vk_imageDataWithRequirements:(id)arg1;
- (void)vk_imageDataWithRequirements:(id)arg1 completion:(id /* block */)arg2;
- (id)vk_imageDataWithUTType:(id)arg1;
- (id)vk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)vk_imageFromSubrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)vk_imageOrientation;
- (id)vk_imageView;
- (id)vk_imageWithTint:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)vk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (id)vk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;
- (id)vk_scaledImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit

+ (id)wk_dynamicImageWithTraitCollectionToImageMap:(id)arg1 baseImage:(id)arg2;
+ (id)wk_imageFromColor:(id)arg1;
+ (id)wk_imageWithContentsOfURL:(id)arg1;
+ (id)wk_imageWithLightAppearanceImage:(id)arg1 darkAppearanceImage:(id)arg2;
+ (id)wk_internalSystemName:(id)arg1;
+ (id)wk_overlayForegroundImage:(id)arg1 overBackgroundImage:(id)arg2;
+ (id)wk_splitThumbnailWithLightAppearanceImage:(id)arg1 darkAppearanceImage:(id)arg2;

- (id)wk_cropImageToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)WAImageLoaderPreCacheImage;
- (void)drawPDFInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)wa_imageWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (id)imagesWithSpriteSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)wf_disclosureImage;
+ (id)wf_workflowEditorImageNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)wf_imageWithColor:(id)arg1;
+ (id)wf_workflowUIImageNamed:(id)arg1;

- (id)wf_insetImageWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqBundleImageNamed:(id)arg1;
+ (id)imageForTableUIWithType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)stretchableImageWithLeftCapWidth:(long long)arg1 rightCapWidth:(long long)arg2;

// Image: /usr/lib/libacmobileshim.dylib

- (id)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

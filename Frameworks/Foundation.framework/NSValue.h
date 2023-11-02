
@interface NSValue : NSObject <BSXPCSecureCoding, MTFilterIdentityValueProviding, MTMaterialSettingsPropertyIdentityValueProviding, NSCopying, NSSecureCoding, OZSCNValueJSExport, REDonatedActionIdentifierProviding, TSDMixing>

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } AXMAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } AXMPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } AXMRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } AXMSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } AXMVectorValue;
@property (readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } CACGestureLivePreviewHandwritingPointValue;
@property (readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } CATransform3DValue;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CGAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } CGPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } CGRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } CGSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } CGVectorValue;
@property (readonly) struct { int x1; int x2; } CMVideoDimensionsValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } CUIKEdgeInsetsValue;
@property (readonly) struct { double x1; double x2; } MKCoordinateSpanValue;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } MKCoordinateValue;
@property (nonatomic, readonly) void PCSIMDFloat3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } PCSIMDFloat4x4Value;
@property (nonatomic, readonly) struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } PVTransformAnimationInfoValue;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } PXDisplayAssetDetailedCountsValue;
@property (nonatomic, readonly) struct { unsigned long long x1; long long x2; } PXDisplayAssetTypedCountValue;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } PXEdgeInsetsValue;
@property (nonatomic, readonly) struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } PXTileIdentifierValue;
@property (readonly) struct { double x1[4]; } RGBResultValue;
@property (nonatomic, readonly) void SIMDDouble2Value;
@property (nonatomic, readonly) void SIMDDouble3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } SIMDDouble3x3Value;
@property (nonatomic, readonly) void SIMDDouble4Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDDouble4x4Value;
@property (nonatomic, readonly) void SIMDDouble8Value;
@property (nonatomic, readonly) void SIMDFloat16Value;
@property (nonatomic, readonly) void SIMDFloat2Value;
@property (nonatomic, readonly) void SIMDFloat3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } SIMDFloat3x3Value;
@property (nonatomic, readonly) void SIMDFloat4Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDFloat4x4Value;
@property (nonatomic, readonly) void SIMDFloat8Value;
@property (nonatomic, readonly) struct { } SIMDQuatDValue;
@property (nonatomic, readonly) struct { } SIMDQuatFValue;
@property (readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } TUIKBHandwritingPointValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } UIEdgeInsetsValue;
@property (readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } UIKBHandwritingPointValue;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } UIOffsetValue;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; } _cfLexiconWordAttributesValue;
@property (nonatomic, readonly) struct { double x1; double x2; } _hd_trivialQuantitySampleValue;
@property (nonatomic, readonly, copy) NSData *ae_dataRepresentation;
@property (readonly) struct IMBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; unsigned long long x5; BOOL x6; BOOL x7; } balloonDescriptor;
@property (readonly) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*bufferPointer;
@property (readonly) struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; } ccui_pointValue;
@property (readonly) struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; } ccui_rectValue;
@property (readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } ccui_sizeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalEdgeInsetsValue;
@property (readonly) struct _AMPDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; } directionalRangeValue;
@property (nonatomic, readonly) struct HUGridPosition { long long x1; long long x2; } gridPositionValue;
@property (nonatomic, readonly) struct HUGridSize { long long x1; long long x2; } gridSizeValue;
@property (readonly) struct { int x1; int x2; } hangulJamoTransformationDataValue;
@property (readonly) unsigned long long hash;
@property (readonly) struct { long long x1[3][3]; bool x2[3][3]; } integerByBandTransitionValue;
@property (readonly) struct { long long x1[3]; bool x2[3]; } integerByBandValue;
@property (readonly) struct _JUDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; } juDirectionalRangeValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } lns_CGSizeValue;
@property (readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } nu_pixelRect;
@property (readonly) const char *objCType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } oz_CGSizeValue;
@property (nonatomic, readonly) void oz_SIMDDouble2Value;
@property (nonatomic, readonly) void oz_SIMDDouble3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } oz_SIMDDouble3x3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } oz_SIMDDouble4x4Value;
@property (nonatomic, readonly) void oz_SIMDFloat2Value;
@property (nonatomic, readonly) void oz_SIMDFloat3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } oz_SIMDFloat3x3Value;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } oz_SIMDFloat4x4Value;
@property (readonly) struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; } pi_grayColorResultValue;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } pu_PUPerspectiveTransformValue;
@property (nonatomic, readonly) struct PUDisplayVelocity { double x1; double x2; double x3; double x4; } pu_displayVelocityValue;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } px_simpleIndexPathValue;
@property (nonatomic, readonly) struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; } px_viewSpecDescriptorValue;
@property (readonly) struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; } quadrilateralValue;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } scnVector3;
@property (nonatomic, readonly) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; bool x8; double x9; } sf_webViewGeometryValue;
@property (nonatomic, readonly) struct _MSVSignedRange { long long x1; long long x2; } signedRangeValue;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } wf_CGAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } wf_CGPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } wf_CGRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } wf_CGSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } wf_CGVectorValue;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_valueWithCFLexiconWordAttributes:(struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; })arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithWeakObject:(id)arg1;

- (struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; })_cfLexiconWordAttributesValue;
- (bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2 strict:(bool)arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValue:(id)arg1;
- (bool)isNSValue__;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeValue;
- (id)weakObjectValue;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (id)valueWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_lp_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lp_CGRectValue;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)_mapkit_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinateSpan:(struct { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })CADoublePointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CADoubleRectValue;
- (struct { double x1; double x2; })MKCoordinateSpanValue;
- (struct CLLocationCoordinate2D { double x1; double x2; })MKCoordinateValue;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_mapkit_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })_mapkit_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_CGRectValue;
- (id)_mapkit_initWithCADoublePoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_mapkit_initWithCADoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_mapkit_initWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithMKMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithZoomRegion:(struct { double x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_zoomRegionValue;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

+ (id)PDFKitValueWithPDFPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)PDFKitValueWithPDFRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGPoint { double x1; double x2; })PDFKitPDFPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PDFKitPDFRectValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)valueWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)valueWithCACornerRadii:(struct CACornerRadii { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })CAColorMatrixValue;
- (struct CACornerRadii { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })CACornerRadiiValue;
- (id)CAMLType;
- (struct CAPoint3D { double x1; double x2; double x3; })CAPoint3DValue;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })CATransform3DValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CA_CGAffineTransformValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double*)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; bool x15; }*)arg4;
- (unsigned long long)CA_numericValueCount;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCN_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)SCN_valueWithSimdMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)valueWithSCNMatrix4:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithSCNVector3:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
+ (id)valueWithSCNVector4:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })SCNMatrix4Value;
- (struct SCNVector3 { float x1; float x2; float x3; })SCNVector3Value;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })SCNVector4Value;
- (struct CGPoint { double x1; double x2; })SCN_CGPointValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SCN_simdMatrix4Value;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

+ (id)ae_valueFromData:(id)arg1 ofObjCType:(const char *)arg2;

- (id)ae_dataRepresentation;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1;
+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (id)valueWithCMVideoDimensions:(struct { int x1; int x2; })arg1;

- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })CMTimeMappingValue;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (struct { int x1; int x2; })CMVideoDimensionsValue;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)axmValueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)axmValueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)axmValueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)axmValueWithCGVector:(struct CGVector { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })AXMAffineTransformValue;
- (struct CGPoint { double x1; double x2; })AXMPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })AXMRectValue;
- (struct CGSize { double x1; double x2; })AXMSizeValue;
- (struct CGVector { double x1; double x2; })AXMVectorValue;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)axValueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)axValueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)axValueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })axCGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axCGRectValue;
- (struct CGSize { double x1; double x2; })axCGSizeValue;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akValueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)akValueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)akValueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithQuadrilateral:(struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGPoint { double x1; double x2; })akPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })akRectValue;
- (struct CGSize { double x1; double x2; })akSizeValue;
- (struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })quadrilateralValue;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

+ (id)valueWithDirectionalRange:(struct _AMPDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 direction:(long long)arg2 hasMixedDirectionality:(bool)arg3;

- (struct _AMPDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })directionalRangeValue;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (struct CGSize { double x1; double x2; })CGSizeValue;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)avt_valueWithFloat3;
+ (id)avt_valueWithFloat3_usableWithKVCForSCNVector3;
+ (id)avt_valueWithFloat4;
+ (id)avt_valueWithFloat4_usableWithKVCForSCNVector4;
+ (id)avt_valueWithFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (void)avt_float3Value;
- (void)avt_float4Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })avt_float4x4Value;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)bs_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)bs_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bs_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)supportsBSXPCSecureCoding;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bs_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })bs_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bs_CGRectValue;
- (struct CGSize { double x1; double x2; })bs_CGSizeValue;
- (bool)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)supportsBSXPCSecureCoding;

// Image: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI

+ (id)valueWithBCUIIconImageInfo:(struct BCUIIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;

- (struct BCUIIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; })BCUIIconImageInfoValue;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)valueWithCUIKEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })CUIKEdgeInsetsValue;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplFullDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

+ (id)ccui_valueWithLayoutPoint:(struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)ccui_valueWithLayoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg1;
+ (id)ccui_valueWithLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg1;

- (struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; })ccui_pointValue;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })ccui_rectValue;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })ccui_sizeValue;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

+ (id)mt_identityValueForFilter:(id)arg1;
+ (id)mt_identityValueForMaterialSettingsProperty:(id)arg1;

- (bool)mt_isIdentityValueForFilter:(id)arg1;
- (bool)mt_isIdentityValueForMaterialSettingsProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)valueWithTimeRange:(struct XRTimeRange { unsigned long long x1; unsigned long long x2; })arg1;

- (unsigned char)implementationClassTypeID;
- (struct XRTimeRange { unsigned long long x1; unsigned long long x2; })timeRangeValue;

// Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit

+ (id)dk_valueWithRenderPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })arg1;

- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })dk_renderPointValue;

// Image: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper

+ (id)valueWithColor:(struct EDColor { double x1; double x2; double x3; })arg1;

- (struct EDColor { double x1; double x2; double x3; })colorValue;

// Image: /System/Library/PrivateFrameworks/FRC.framework/FRC

+ (id)valuewithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_valueWithGEOPlaceDataComponentKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;

- (union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })_geo_GEOPlaceDataComponentKeyValue;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_hd_valueWithTrivialQuantitySample:(struct { double x1; double x2; })arg1;

- (struct { double x1; double x2; })_hd_trivialQuantitySampleValue;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)valueWithHKGraphSeriesDataBlockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1;
+ (id)valueWithHKLinearTransform:(struct HKLinearTransform { double x1; double x2; })arg1;

- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })HKGraphSeriesDataBlockPathValue;
- (struct HKLinearTransform { double x1; double x2; })HKLinearTransformValue;
- (id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2;
- (bool)_hk_isCGPoint;
- (bool)_hk_isHKLinearTransform;
- (bool)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)valueWithGridPosition:(struct HUGridPosition { long long x1; long long x2; })arg1;
+ (id)valueWithGridSize:(struct HUGridSize { long long x1; long long x2; })arg1;

- (struct HUGridPosition { long long x1; long long x2; })gridPositionValue;
- (struct HUGridSize { long long x1; long long x2; })gridSizeValue;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

+ (id)valueWithBalloonDescriptor:(struct IMBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; unsigned long long x5; BOOL x6; BOOL x7; })arg1;

- (struct IMBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; unsigned long long x5; BOOL x6; BOOL x7; })balloonDescriptor;

// Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager

+ (id)valueWithDockState:(struct DockState { int x1; struct UnsignedWide { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct UnsignedWide { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; unsigned long long x4; unsigned char x5[6]; unsigned long long x6; unsigned char x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; double x12; double x13; bool x14; bool x15; id x16; struct { bool x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; } x17; unsigned int x18; unsigned int x19; bool x20; })arg1;

- (struct DockState { int x1; struct UnsignedWide { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct UnsignedWide { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; unsigned long long x4; unsigned char x5[6]; unsigned long long x6; unsigned char x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; double x12; double x13; bool x14; bool x15; id x16; struct { bool x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; } x17; unsigned int x18; unsigned int x19; bool x20; })dockStateValue;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

+ (id)valueWithJUDirectionalRange:(struct _JUDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 direction:(long long)arg2 hasMixedDirectionality:(bool)arg3;

- (struct _JUDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })juDirectionalRangeValue;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (id)lns_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGSize { double x1; double x2; })lns_CGSizeValue;

// Image: /System/Library/PrivateFrameworks/MLAssetIO.framework/MLAssetIO

+ (id)valueWithMIORange:(struct _MIORange { long long x1; long long x2; })arg1;

- (struct _MIORange { long long x1; long long x2; })MIORangeValue;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)valueWithMSVSignedRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;

- (struct _MSVSignedRange { long long x1; long long x2; })signedRangeValue;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; bool x8; double x9; })sf_webViewGeometryValue;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)valueWithML3NameOrder:(struct { long long x1; long long x2; })arg1;

- (struct { long long x1; long long x2; })ML3NameOrderValue;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

+ (id)nu_valueWithPixelRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;

- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })nu_pixelRect;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (id)nf_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nf_CGRectValue;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ic_rectValue;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)pi_valueWithGrayColorResult:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1;
+ (id)valueWithRGBResult:(struct { double x1[4]; })arg1;

- (struct { double x1[4]; })RGBResultValue;
- (struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })pi_grayColorResultValue;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_valueWithMemoryFontsSpecIdentifier:(struct PXMemoryFontsSpecIdentifier { long long x1; long long x2; long long x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; bool x6; })arg1;
+ (id)px_valueWithSimpleIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
+ (id)px_valueWithViewSpecDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
+ (id)valueWithPXDisplayAssetDetailedCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
+ (id)valueWithPXDisplayAssetTypedCount:(struct { unsigned long long x1; long long x2; })arg1;
+ (id)valueWithPXEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithPXTileGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1;
+ (id)valueWithPXTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })PXDisplayAssetDetailedCountsValue;
- (struct { unsigned long long x1; long long x2; })PXDisplayAssetTypedCountValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })PXEdgeInsetsValue;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })PXTileGeometryValue;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })PXTileIdentifierValue;
- (struct PXMemoryFontsSpecIdentifier { long long x1; long long x2; long long x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; bool x6; })px_memoryFontsSpecIdentifierValue;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })px_simpleIndexPathValue;
- (struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })px_viewSpecDescriptorValue;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_valueWithDisplayVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
+ (id)pu_valueWithPUPerspectiveTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })pu_PUPerspectiveTransformValue;
- (struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })pu_displayVelocityValue;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })CGPointValue;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)PCValueWithSIMDFloat3;
+ (id)PCValueWithSIMDFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)PCValueWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)oz_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)oz_valueWithSIMDDouble2;
+ (id)oz_valueWithSIMDDouble3;
+ (id)oz_valueWithSIMDDouble3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)oz_valueWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)oz_valueWithSIMDFloat2;
+ (id)oz_valueWithSIMDFloat3;
+ (id)oz_valueWithSIMDFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)oz_valueWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)valueWithPVTransformAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;
+ (id)valueWithSIMDDouble2;
+ (id)valueWithSIMDDouble3;
+ (id)valueWithSIMDDouble3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)valueWithSIMDDouble4;
+ (id)valueWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)valueWithSIMDDouble8;
+ (id)valueWithSIMDFloat16;
+ (id)valueWithSIMDFloat2;
+ (id)valueWithSIMDFloat3;
+ (id)valueWithSIMDFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)valueWithSIMDFloat4;
+ (id)valueWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)valueWithSIMDFloat8;
+ (id)valueWithSIMDQuatD:(struct { })arg1;
+ (id)valueWithSIMDQuatF:(struct { })arg1;

- (void)PCSIMDFloat3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })PCSIMDFloat4x4Value;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })PVTransformAnimationInfoValue;
- (void)SIMDDouble2Value;
- (void)SIMDDouble3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })SIMDDouble3x3Value;
- (void)SIMDDouble4Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDDouble4x4Value;
- (void)SIMDDouble8Value;
- (void)SIMDFloat16Value;
- (void)SIMDFloat2Value;
- (void)SIMDFloat3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })SIMDFloat3x3Value;
- (void)SIMDFloat4Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDFloat4x4Value;
- (void)SIMDFloat8Value;
- (struct { })SIMDQuatDValue;
- (struct { })SIMDQuatFValue;
- (struct CGSize { double x1; double x2; })oz_CGSizeValue;
- (void)oz_SIMDDouble2Value;
- (void)oz_SIMDDouble3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })oz_SIMDDouble3x3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })oz_SIMDDouble4x4Value;
- (void)oz_SIMDFloat2Value;
- (void)oz_SIMDFloat3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })oz_SIMDFloat3x3Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })oz_SIMDFloat4x4Value;
- (struct SCNVector3 { float x1; float x2; float x3; })scnVector3;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)bufferPointer;

// Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon

- (struct CGSize { double x1; double x2; })QL_CGSizeValue;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

+ (id)re_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })re_CGRectValue;
- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)valueWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CLLocationCoordinate2D { double x1; double x2; })CLLocationCoordinate2DValue;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKCoordinateRegionValue;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

+ (id)valueWithCACGestureLivePreviewHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;

- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })CACGestureLivePreviewHandwritingPointValue;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices

+ (id)valueWithArc:(struct _FstArc { int x1; int x2; })arg1;

- (struct _FstArc { int x1; int x2; })arcValue;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)valueWithTSDEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })TSDEdgeInsetsValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_valueWithCellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg1;
+ (id)tv_valueWithRowMetrics:(struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })arg1;

- (struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })tv_cellMetricsValue;
- (struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })tv_rowMetricsValue;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

+ (id)valueWithTUIKBHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;

- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })TUIKBHandwritingPointValue;

// Image: /System/Library/PrivateFrameworks/TypistFramework.framework/TypistFramework

+ (id)hangulJamoTransformationDataValueWithJamoType:(int)arg1 direction:(int)arg2;
+ (id)valueWithHangulJamoTransformationData:(struct { int x1; int x2; })arg1;
+ (id)valueWithTYArabicCharacter:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })arg1;

- (struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })arabicCharacterValue;
- (struct { int x1; int x2; })hangulJamoTransformationDataValue;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_valueWithPressTrigger:(struct _UIPressTrigger { long long x1; long long x2; double x3; bool x4; })arg1;
+ (id)ui_valueWithPlatformPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)ui_valueWithPlatformSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGVector:(struct CGVector { double x1; double x2; })arg1;
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIKBHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
+ (id)valueWithUIOffset:(struct UIOffset { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGSize { double x1; double x2; })CGSizeValue;
- (struct CGVector { double x1; double x2; })CGVectorValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })UIEdgeInsetsValue;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })UIKBHandwritingPointValue;
- (struct UIOffset { double x1; double x2; })UIOffsetValue;
- (struct _UIPressTrigger { long long x1; long long x2; double x3; bool x4; })_UIPressTriggerValue;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalEdgeInsetsValue;
- (struct CGPoint { double x1; double x2; })ui_platformPointValue;
- (struct CGSize { double x1; double x2; })ui_platformSizeValue;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)valueWithDirectionalRange:(struct _AMPDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 direction:(long long)arg2 hasMixedDirectionality:(bool)arg3;

- (struct _AMPDirectionalRange { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; bool x3; })directionalRangeValue;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_valueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)vk_valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)vk_valueWithSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })vk_pointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vk_rectValue;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)wf_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)wf_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)wf_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)wf_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)wf_valueWithCGVector:(struct CGVector { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })wf_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })wf_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })wf_CGRectValue;
- (struct CGSize { double x1; double x2; })wf_CGSizeValue;
- (struct CGVector { double x1; double x2; })wf_CGVectorValue;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_web_CGRectValue;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

+ (id)valuewithIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)valuewithIntegerByBandTransition:(struct { long long x1[3][3]; bool x2[3][3]; })arg1;

- (struct { long long x1[3][3]; bool x2[3][3]; })integerByBandTransitionValue;
- (struct { long long x1[3]; bool x2[3]; })integerByBandValue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

+ (id)valueWithContentBlend:(struct _TSDContentBlend { id x1; id x2; double x3; })arg1;

- (struct _TSDContentBlend { id x1; id x2; double x3; })TSDContentBlendValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;

@end

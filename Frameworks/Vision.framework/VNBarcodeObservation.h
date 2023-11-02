
@interface VNBarcodeObservation : VNRectangleObservation <VNDataDetectorSupporting> {
    NSDictionary * _acbsBarcodeInfo;
    CIBarcodeDescriptor * _barcodeDescriptor;
    NSNumber * _cachedAppClipCodeMetadataValue;
    NSNumber * _cachedIsColorInverted;
    NSNumber * _cachedIsGS1DataCarrier;
    NSData * _cachedPayloadData;
    NSString * _cachedPayloadStringValue;
    NSNumber * _cachedSupplementalCompositeType;
    NSString * _cachedSupplementalPayload;
    NSData * _cachedSupplementalPayloadRawData;
    struct __MRCDescriptor { } * _mrcDescriptor;
    NSString * _symbology;
}

@property (setter=setACBSBarcodeInfo:, nonatomic, copy) NSDictionary *acbsBarcodeInfo;
@property (nonatomic, readonly, copy) NSNumber *appClipCodeMetadataValue;
@property (nonatomic, readonly) CIBarcodeDescriptor *barcodeDescriptor;
@property (nonatomic, readonly) bool isColorInverted;
@property (nonatomic, readonly) bool isGS1DataCarrier;
@property (setter=setMRCDescriptor:, nonatomic) struct __MRCDescriptor { }*mrcDescriptor;
@property (nonatomic, readonly, copy) NSData *payloadData;
@property (nonatomic, readonly, copy) NSData *payloadDataValue;
@property (nonatomic, readonly, copy) NSString *payloadStringValue;
@property (nonatomic, readonly) long long supplementalCompositeType;
@property (nonatomic, readonly, copy) NSData *supplementalPayloadData;
@property (nonatomic, readonly, copy) NSString *supplementalPayloadString;
@property (nonatomic, readonly, copy) NSString *symbology;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cachePayloadAndSupplementalPayload;
- (bool)_propertyAllowedForRevision;
- (id)acbsBarcodeInfo;
- (id)appClipCodeMetadataValue;
- (id)barcodeDescriptor;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getDataDetectorResults:(id*)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(struct CGPoint { double x1; double x2; })arg4 topRight:(struct CGPoint { double x1; double x2; })arg5 bottomRight:(struct CGPoint { double x1; double x2; })arg6 bottomLeft:(struct CGPoint { double x1; double x2; })arg7;
- (bool)isColorInverted;
- (bool)isEqual:(id)arg1;
- (bool)isGS1DataCarrier;
- (struct __MRCDescriptor { }*)mrcDescriptor;
- (id)payloadData;
- (id)payloadDataValue;
- (id)payloadStringValue;
- (void)setACBSBarcodeInfo:(id)arg1;
- (void)setMRCDescriptor:(struct __MRCDescriptor { }*)arg1;
- (void)setMrcDescriptor:(struct __MRCDescriptor { }*)arg1;
- (long long)supplementalCompositeType;
- (id)supplementalPayloadData;
- (id)supplementalPayloadString;
- (id)symbology;
- (id)vn_cloneObject;

@end

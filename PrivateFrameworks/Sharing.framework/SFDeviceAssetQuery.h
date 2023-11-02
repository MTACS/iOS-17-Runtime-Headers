
@interface SFDeviceAssetQuery : NSObject {
    NSDictionary * _additionalQueryParameters;
    NSString * _assetType;
    NSString * _color;
    bool  _h264;
    bool  _legacyAsset;
    NSString * _mappedProductType;
    NSString * _productType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSDictionary *additionalQueryParameters;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) NSString *effectiveProductType;
@property (nonatomic) bool h264;
@property (nonatomic) bool legacyAsset;
@property (nonatomic, retain) NSString *mappedProductType;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *stringIdentifier;
@property (nonatomic, readonly) struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*ucat;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)deviceWantsH264;

- (void).cxx_destruct;
- (id)additionalQueryParameters;
- (id)assetType;
- (id)color;
- (void)dealloc;
- (id)description;
- (id)effectiveProductType;
- (bool)h264;
- (unsigned long long)hash;
- (id)initWithAssetType:(id)arg1 productType:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithHomePodColor:(unsigned long long)arg1 version:(unsigned int)arg2;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithSingleHomePodColor:(unsigned char)arg1 version:(unsigned int)arg2;
- (id)initWithTagColor:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)legacyAsset;
- (id)loggingProductType;
- (id)mappedProductType;
- (id)productType;
- (void)setH264:(bool)arg1;
- (void)setLegacyAsset:(bool)arg1;
- (void)setMappedProductType:(id)arg1;
- (id)stringIdentifier;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)ucat;
- (id)variantIdentifier;
- (unsigned long long)version;

@end

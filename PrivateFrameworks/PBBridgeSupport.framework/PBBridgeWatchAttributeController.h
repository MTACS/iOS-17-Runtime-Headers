
@interface PBBridgeWatchAttributeController : NSObject {
    NRDevice * _device;
    unsigned long long  _edition;
    unsigned long long  _hardwareBehavior;
    unsigned long long  _internalSize;
    unsigned long long  _material;
    unsigned long long  _stingButtonColor;
    NSCache * _stringCache;
}

@property (nonatomic, retain) NRDevice *device;
@property (nonatomic, readonly) unsigned long long edition;
@property (nonatomic, readonly) unsigned long long hardwareBehavior;
@property (nonatomic, readonly) bool hasTwoYearWarranty;
@property (nonatomic, readonly) unsigned long long internalSize;
@property (nonatomic, readonly) unsigned long long material;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long stingButtonColor;
@property (nonatomic, retain) NSCache *stringCache;

+ (unsigned long long)_materialForCLHSValue:(unsigned long long)arg1;
+ (id)editionDescription:(unsigned long long)arg1;
+ (id)hwBehaviorDescription:(unsigned long long)arg1;
+ (id)materialDescription:(unsigned long long)arg1;
+ (unsigned long long)materialFromDevice:(id)arg1;
+ (id)materialKeyColorForMaterial:(unsigned long long)arg1;
+ (id)resourceString:(id)arg1 material:(unsigned long long)arg2 size:(unsigned long long)arg3 forAttributes:(unsigned long long)arg4;
+ (id)sharedDeviceController;
+ (id)sizeDescription:(unsigned long long)arg1;
+ (unsigned long long)sizeFromDevice:(id)arg1;
+ (unsigned short)sizeFromInternalSize:(unsigned long long)arg1;
+ (id)stingMaterialDescription:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_populateMaterialDetailsWithDMinProperties:(id)arg1;
- (void)_setMaterialWithCLHSValue:(unsigned long long)arg1;
- (id)attributesDescription;
- (id)device;
- (unsigned long long)edition;
- (unsigned long long)fallbackMaterialForSize:(unsigned long long)arg1;
- (id)getGestaltDmin;
- (unsigned long long)hardwareBehavior;
- (bool)hasTwoYearWarranty;
- (id)init;
- (unsigned long long)internalSize;
- (unsigned long long)material;
- (id)materialKeyColor;
- (id)resourceString:(id)arg1 forAttributes:(unsigned long long)arg2;
- (void)setDevice:(id)arg1;
- (void)setInternalSize:(unsigned long long)arg1;
- (void)setMaterial:(unsigned long long)arg1;
- (void)setStringCache:(id)arg1;
- (unsigned long long)size;
- (unsigned long long)stingButtonColor;
- (id)stringCache;

@end
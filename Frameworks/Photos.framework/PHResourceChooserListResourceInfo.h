
@interface PHResourceChooserListResourceInfo : NSObject <NSCopying, PHRecyclableObject> {
    struct CGSize { 
        double width; 
        double height; 
    }  _approximateSize;
    bool  _canDownload;
    NSObject<PLResourceIdentity> * _identity;
    bool  _isDerivative;
    bool  _isPrimaryFormat;
    NSObject<PLResourceDataStoreKey> * _key;
    short  _localAvailabilityTarget;
    bool  _locallyGeneratableOnDemand;
    unsigned int  _recipeID;
    float  _resourceScale;
    unsigned int  _resourceType;
    unsigned int  _resourceVersion;
    NSObject<PLResourceDataStore> * _store;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } approximateSize;
@property (nonatomic, readonly) bool canDownload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<PLResourceIdentity> *identity;
@property (nonatomic, readonly) bool isDerivative;
@property (nonatomic, readonly) bool isPrimaryFormat;
@property (nonatomic, readonly) NSObject<PLResourceDataStoreKey> *key;
@property (nonatomic, readonly) short localAvailabilityTarget;
@property (nonatomic) bool locallyGeneratableOnDemand;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) float resourceScale;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int resourceVersion;
@property (nonatomic, readonly) NSObject<PLResourceDataStore> *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })approximateSize;
- (bool)canDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithResourceType:(unsigned int)arg1 recipeID:(unsigned int)arg2 resourceVersion:(unsigned int)arg3 approximateSize:(struct CGSize { double x1; double x2; })arg4 resourceScale:(double)arg5 isDerivative:(bool)arg6 isPrimaryFormat:(bool)arg7 canDownload:(bool)arg8 locallyGeneratableOnDemand:(bool)arg9 store:(id)arg10 key:(id)arg11 identity:(id)arg12 localAvailabilityTarget:(short)arg13;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryFormat;
- (id)key;
- (short)localAvailabilityTarget;
- (bool)locallyGeneratableOnDemand;
- (void)populateWithResourceType:(unsigned int)arg1 recipeID:(unsigned int)arg2 resourceVersion:(unsigned int)arg3 approximateSize:(struct CGSize { double x1; double x2; })arg4 resourceScale:(double)arg5 isDerivative:(bool)arg6 isPrimaryFormat:(bool)arg7 canDownload:(bool)arg8 locallyGeneratableOnDemand:(bool)arg9 store:(id)arg10 key:(id)arg11 identity:(id)arg12 localAvailabilityTarget:(short)arg13;
- (void)prepareForReuse;
- (unsigned int)recipeID;
- (float)resourceScale;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)setLocallyGeneratableOnDemand:(bool)arg1;
- (id)store;

@end


@interface MPStoreModelObjectBuilder : NSObject {
    bool  _preventStoreItemMetadataCaching;
    MPPropertySet * _requestedPropertySet;
}

@property (nonatomic) bool preventStoreItemMetadataCaching;
@property (nonatomic, readonly) MPPropertySet *requestedPropertySet;

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2;
- (bool)preventStoreItemMetadataCaching;
- (id)requestedPropertySet;
- (void)setPreventStoreItemMetadataCaching:(bool)arg1;

@end

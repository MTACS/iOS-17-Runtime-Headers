
@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    id /* block */  _fallbackArtworkCatalogBlock;
    MPModelObject * _modelObject;
    NSDictionary * _propertyValues;
}

@property (nonatomic, copy) id /* block */ fallbackArtworkCatalogBlock;
@property (nonatomic, readonly) MPModelObject *modelObject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)fallbackArtworkCatalogBlock;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelObject;
- (unsigned long long)persistentID;
- (void)setFallbackArtworkCatalogBlock:(id /* block */)arg1;
- (id)valueForProperty:(id)arg1;

@end

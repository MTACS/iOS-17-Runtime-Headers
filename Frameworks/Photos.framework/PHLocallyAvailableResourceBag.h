
@interface PHLocallyAvailableResourceBag : NSObject <NSCopying, PHRecyclableObject> {
    <PLAssetID> * _assetID;
    <PLResourceDataStore> * _dataStore;
    <PLResourceDataStoreKey> * _dataStoreKey;
    bool  _isDegraded;
    bool  _isDerivedFromDeferredPreview;
    bool  _isPrimaryFormat;
    bool  _keyIsHintBased;
}

@property (nonatomic, retain) <PLAssetID> *assetID;
@property (nonatomic, retain) <PLResourceDataStore> *dataStore;
@property (nonatomic, retain) <PLResourceDataStoreKey> *dataStoreKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDegraded;
@property (nonatomic) bool isDerivedFromDeferredPreview;
@property (nonatomic) bool isPrimaryFormat;
@property (nonatomic) bool keyIsHintBased;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStore;
- (id)dataStoreKey;
- (id)description;
- (bool)isDegraded;
- (bool)isDerivedFromDeferredPreview;
- (bool)isPrimaryFormat;
- (bool)keyIsHintBased;
- (void)prepareForReuse;
- (id)resourceData;
- (id)resourceURL;
- (void)setAssetID:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setIsDegraded:(bool)arg1;
- (void)setIsDerivedFromDeferredPreview:(bool)arg1;
- (void)setIsPrimaryFormat:(bool)arg1;
- (void)setKeyIsHintBased:(bool)arg1;

@end

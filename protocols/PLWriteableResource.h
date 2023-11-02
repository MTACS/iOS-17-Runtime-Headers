
@protocol PLWriteableResource <PLResource>

@required

- (NSString *)codecFourCharCodeName;
- (<PLResourceDataStore> *)dataStore;
- (<PLResourceDataStoreKey> *)dataStoreKey;
- (long long)dataStoreSubtype;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (unsigned int)resourceType;
- (float)scale;
- (void)setCodecFourCharCodeName:(NSString *)arg1;
- (void)setDataStore:(id <PLResourceDataStore>)arg1;
- (void)setDataStoreKey:(id <PLResourceDataStoreKey>)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setUniformTypeIdentifier:(PLUniformTypeIdentifier *)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (PLUniformTypeIdentifier *)uniformTypeIdentifier;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (unsigned int)version;

@end

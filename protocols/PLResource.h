
@protocol PLResource <PLResourceIdentity>

@required

- (<PLAssetID> *)assetID;
- (NSString *)codecFourCharCodeName;
- (unsigned long long)cplType;
- (long long)dataLength;
- (<PLResourceDataStore> *)dataStore;
- (<PLResourceDataStoreKey> *)dataStoreKey;
- (long long)dataStoreSubtype;
- (long long)estimatedDataLength;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isInCloud;
- (bool)isPlayableVideo;
- (bool)isVirtual;
- (short)localAvailability;
- (short)localAvailabilityTarget;
- (unsigned int)orientation;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)remoteAvailabilityTarget;
- (float)scale;
- (float)scaleGivenAssetHasAdjustments:(bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
- (NSDate *)trashedDate;
- (short)trashedState;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)utiConformanceHint;

@end

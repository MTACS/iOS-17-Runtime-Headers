
@interface MusicKit_SoftLinking : NSObject

// Image: /System/Library/Frameworks/MusicKit.framework/MusicKit

+ (void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;
+ (id)_identifierSetWithCatalogID:(id)arg1 libraryID:(id)arg2 cloudID:(id)arg3 purchasedAdamID:(id)arg4 deviceLocalID:(id)arg5 possibleDeviceLocalID:(id)arg6 modelObjectType:(long long)arg7 source:(long long)arg8;
+ (bool)_isEntitledToUserDSID;
+ (long long)_libraryPersistentIDForStringValue:(id)arg1;
+ (id)artworkCatalogWithDataSourceShortDescription:(id)arg1 dataSourceIdentifier:(id)arg2 tokenParameters:(id)arg3;
+ (id)artworkCatalogWithStoreArtworkToken:(id)arg1;
+ (long long)audioTraitsForRawValue:(long long)arg1;
+ (id)emptyIdentifierSet;
+ (id)identifierSetFromLegacyModelObject:(id)arg1;
+ (id)identifierSetWithCatalogID:(id)arg1 libraryID:(id)arg2 cloudID:(id)arg3 purchasedAdamID:(id)arg4 deviceLocalID:(id)arg5 modelObjectType:(long long)arg6 source:(long long)arg7;
+ (id)identifierSetWithIdentifier:(id)arg1 modelObjectType:(long long)arg2 specificLibraryDatabaseID:(id)arg3 isPossibleLibraryPersistentID:(bool)arg4 source:(long long)arg5;
+ (id)rawSourceFromSource:(long long)arg1;
+ (long long)rawValueForAudioTraits:(long long)arg1;
+ (id)storeArtworkTokenWithImageArtworkInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal

+ (id)deviceActivePlayerPath;
+ (id)musicRouteWithUnderlyingRoute:(id)arg1;
+ (id)playerPathWithUnderlyingPlayerPath:(id)arg1;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;

@end

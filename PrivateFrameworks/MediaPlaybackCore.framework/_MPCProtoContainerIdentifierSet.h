
@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {
    NSString * _cloudCollectionID;
    long long  _cloudID;
    NSString * _cloudUniversalLibraryID;
    long long  _delegateInfoID;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int storeAdamID : 1; 
    }  _has;
    NSString * _playbackAuthorizationToken;
    NSString * _radioStationID;
    long long  _storeAdamID;
    NSString * _storePlaylistGlobalID;
    NSString * _storePlaylistVersionHash;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

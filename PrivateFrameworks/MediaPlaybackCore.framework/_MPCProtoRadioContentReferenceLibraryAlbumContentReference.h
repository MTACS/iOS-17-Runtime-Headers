
@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {
    NSString * _albumName;
    struct { 
        unsigned int representativeItemCloudID : 1; 
        unsigned int storeAdamID : 1; 
    }  _has;
    NSString * _playbackAuthorizationToken;
    long long  _representativeItemCloudID;
    long long  _storeAdamID;
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

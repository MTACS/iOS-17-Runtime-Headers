
@interface _MPCProtoRadioContentReference : PBCodable <NSCopying> {
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference * _libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference * _libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference * _libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference * _storeContentReference;
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

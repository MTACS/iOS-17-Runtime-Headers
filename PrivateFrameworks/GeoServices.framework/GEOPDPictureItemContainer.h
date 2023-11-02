
@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {
    bool  _allowFullScreenPhoto;
    struct { 
        unsigned int has_allowFullScreenPhoto : 1; 
    }  _flags;
    NSMutableArray * _pictureItems;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

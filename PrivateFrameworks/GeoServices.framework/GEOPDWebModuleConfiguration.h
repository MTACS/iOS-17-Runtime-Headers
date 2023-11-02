
@interface GEOPDWebModuleConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
        unsigned int has_shouldRenderBackgroundPlatter : 1; 
    }  _flags;
    bool  _shouldRenderBackgroundPlatter;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSString * _url;
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

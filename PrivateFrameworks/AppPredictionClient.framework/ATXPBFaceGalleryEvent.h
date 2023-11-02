
@interface ATXPBFaceGalleryEvent : PBCodable <NSCopying> {
    ATXPBFaceGalleryConfiguration * _configuration;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    NSMutableArray * _items;
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

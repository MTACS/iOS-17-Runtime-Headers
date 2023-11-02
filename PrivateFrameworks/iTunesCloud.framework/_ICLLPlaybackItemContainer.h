
@interface _ICLLPlaybackItemContainer : PBCodable <NSCopying> {
    NSString * _containerId;
    NSString * _featureName;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _mediaId;
    NSString * _stationHash;
    int  _type;
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

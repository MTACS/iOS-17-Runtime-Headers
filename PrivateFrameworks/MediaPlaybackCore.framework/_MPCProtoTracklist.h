
@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray * _accountInfos;
    NSMutableArray * _containers;
    struct { 
        unsigned int shuffleMode : 1; 
    }  _has;
    int  _shuffleMode;
    _MPCProtoTracklistIndexPath * _startingItemIndexPath;
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

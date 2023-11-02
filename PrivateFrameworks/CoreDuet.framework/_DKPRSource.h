
@interface _DKPRSource : PBCodable <NSCopying> {
    NSString * _bundleID;
    NSString * _deviceID;
    NSString * _groupID;
    struct { 
        unsigned int userID : 1; 
    }  _has;
    NSString * _itemID;
    NSString * _sourceID;
    int  _userID;
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

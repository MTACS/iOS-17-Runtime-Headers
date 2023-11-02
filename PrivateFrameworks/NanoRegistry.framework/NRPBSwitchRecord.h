
@interface NRPBSwitchRecord : PBCodable <NSCopying> {
    double  _dateTimeInterval;
    NSData * _deviceIDBytes;
    struct { 
        unsigned int dateTimeInterval : 1; 
        unsigned int switchIndex : 1; 
    }  _has;
    int  _switchIndex;
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

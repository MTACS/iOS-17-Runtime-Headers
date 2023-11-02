
@interface ICPAPlayActivityEnqueuerProperties : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSString * _deviceGUID;
    NSString * _deviceName;
    struct { 
        unsigned int storeAccountID : 1; 
        unsigned int systemReleaseType : 1; 
        unsigned int privateListeningEnabled : 1; 
        unsigned int sBEnabled : 1; 
    }  _has;
    bool  _privateListeningEnabled;
    bool  _sBEnabled;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    int  _systemReleaseType;
    NSString * _timeZoneName;
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

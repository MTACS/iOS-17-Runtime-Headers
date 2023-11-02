
@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {
    unsigned long long  _accountID;
    long long  _delegateInfoID;
    NSString * _deviceGUID;
    NSString * _deviceName;
    struct { 
        unsigned int accountID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int systemReleaseType : 1; 
        unsigned int privateListeningEnabled : 1; 
    }  _has;
    bool  _privateListeningEnabled;
    NSString * _requestUserAgent;
    int  _systemReleaseType;
    NSString * _timeZoneName;
    NSString * _uuid;
}

+ (id)currentDeviceDelegateInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

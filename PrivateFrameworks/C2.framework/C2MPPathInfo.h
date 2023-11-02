
@interface C2MPPathInfo : PBCodable <NSCopying> {
    unsigned long long  _applicationBytesReceived;
    unsigned long long  _applicationBytesSent;
    struct { 
        unsigned int applicationBytesReceived : 1; 
        unsigned int applicationBytesSent : 1; 
    }  _has;
    NSString * _interfaceType;
    NSString * _radioType;
}

@property (nonatomic) unsigned long long applicationBytesReceived;
@property (nonatomic) unsigned long long applicationBytesSent;
@property (nonatomic) bool hasApplicationBytesReceived;
@property (nonatomic) bool hasApplicationBytesSent;
@property (nonatomic, readonly) bool hasInterfaceType;
@property (nonatomic, readonly) bool hasRadioType;
@property (nonatomic, retain) NSString *interfaceType;
@property (nonatomic, retain) NSString *radioType;

- (void).cxx_destruct;
- (unsigned long long)applicationBytesReceived;
- (unsigned long long)applicationBytesSent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplicationBytesReceived;
- (bool)hasApplicationBytesSent;
- (bool)hasInterfaceType;
- (bool)hasRadioType;
- (unsigned long long)hash;
- (id)interfaceType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)radioType;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBytesReceived:(unsigned long long)arg1;
- (void)setApplicationBytesSent:(unsigned long long)arg1;
- (void)setHasApplicationBytesReceived:(bool)arg1;
- (void)setHasApplicationBytesSent:(bool)arg1;
- (void)setInterfaceType:(id)arg1;
- (void)setRadioType:(id)arg1;
- (void)writeTo:(id)arg1;

@end

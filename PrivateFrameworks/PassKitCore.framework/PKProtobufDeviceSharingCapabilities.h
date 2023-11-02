
@interface PKProtobufDeviceSharingCapabilities : PBCodable <NSCopying> {
    NSString * _altDSID;
    NSString * _deviceRegion;
    NSData * _fromDeviceVersion;
    NSString * _handle;
    struct { 
        unsigned int supportsManatee : 1; 
    }  _has;
    bool  _supportsManatee;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *deviceRegion;
@property (nonatomic, retain) NSData *fromDeviceVersion;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool hasAltDSID;
@property (nonatomic, readonly) bool hasDeviceRegion;
@property (nonatomic, readonly) bool hasFromDeviceVersion;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic) bool hasSupportsManatee;
@property (nonatomic) bool supportsManatee;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)altDSID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceRegion;
- (id)dictionaryRepresentation;
- (id)fromDeviceVersion;
- (id)handle;
- (bool)hasAltDSID;
- (bool)hasDeviceRegion;
- (bool)hasFromDeviceVersion;
- (bool)hasHandle;
- (bool)hasSupportsManatee;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setDeviceRegion:(id)arg1;
- (void)setFromDeviceVersion:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasSupportsManatee:(bool)arg1;
- (void)setSupportsManatee:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)supportsManatee;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

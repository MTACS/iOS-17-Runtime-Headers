
@interface _MROriginProtobuf : PBCodable <NSCopying> {
    _MRDeviceInfoMessageProtobuf * _deviceInfoDeprecated;
    NSString * _displayName;
    struct { 
        unsigned int identifier : 1; 
        unsigned int type : 1; 
        unsigned int isLocallyHosted : 1; 
    }  _has;
    int  _identifier;
    bool  _isLocallyHosted;
    int  _type;
}

@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDeviceInfoDeprecated;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasIsLocallyHosted;
@property (nonatomic) bool hasType;
@property (nonatomic) int identifier;
@property (nonatomic) bool isLocallyHosted;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfoDeprecated;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDeviceInfoDeprecated;
- (bool)hasDisplayName;
- (bool)hasIdentifier;
- (bool)hasIsLocallyHosted;
- (bool)hasType;
- (unsigned long long)hash;
- (int)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isLocallyHosted;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfoDeprecated:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasIsLocallyHosted:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setIsLocallyHosted:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

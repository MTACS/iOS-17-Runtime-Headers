
@interface _INPBFindDeviceAndPlaySoundIntent : PBCodable <NSCopying, NSSecureCoding, _INPBFindDeviceAndPlaySoundIntent> {
    NSArray * _devices;
    struct { 
        unsigned int isStopRequest : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isStopRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, readonly) unsigned long long devicesCount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsStopRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isStopRequest;
@property (readonly) Class superclass;

+ (Class)deviceType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (void)clearDevices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceAtIndex:(unsigned long long)arg1;
- (id)devices;
- (unsigned long long)devicesCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasIsStopRequest;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)isStopRequest;
- (bool)readFrom:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setHasIsStopRequest:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsStopRequest:(bool)arg1;
- (void)writeTo:(id)arg1;

@end


@interface _INPBVoiceCommandDeviceInformation : PBCodable <NSCopying, NSSecureCoding, _INPBVoiceCommandDeviceInformation> {
    int  _deviceIdiom;
    struct { 
        unsigned int deviceIdiom : 1; 
        unsigned int isHomePodInUltimateMode : 1; 
    }  _has;
    bool  _isHomePodInUltimateMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceIdiom;
@property (nonatomic) bool hasDeviceIdiom;
@property (nonatomic) bool hasIsHomePodInUltimateMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHomePodInUltimateMode;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsDeviceIdiom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceIdiom;
- (id)deviceIdiomAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDeviceIdiom;
- (bool)hasIsHomePodInUltimateMode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHomePodInUltimateMode;
- (bool)readFrom:(id)arg1;
- (void)setDeviceIdiom:(int)arg1;
- (void)setHasDeviceIdiom:(bool)arg1;
- (void)setHasIsHomePodInUltimateMode:(bool)arg1;
- (void)setIsHomePodInUltimateMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

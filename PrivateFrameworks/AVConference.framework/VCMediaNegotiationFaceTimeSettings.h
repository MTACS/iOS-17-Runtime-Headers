
@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {
    unsigned int  _capabilities;
    struct { 
        unsigned int capabilities : 1; 
        unsigned int linkProbingCapabilityVersion : 1; 
        unsigned int mediaControlInfoSubVersion : 1; 
        unsigned int switches : 1; 
        unsigned int oneToOneModeSupported : 1; 
    }  _has;
    unsigned int  _linkProbingCapabilityVersion;
    unsigned int  _mediaControlInfoSubVersion;
    bool  _oneToOneModeSupported;
    unsigned int  _switches;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic) bool hasCapabilities;
@property (nonatomic) bool hasLinkProbingCapabilityVersion;
@property (nonatomic) bool hasMediaControlInfoSubVersion;
@property (nonatomic) bool hasOneToOneModeSupported;
@property (nonatomic) bool hasSwitches;
@property (nonatomic) unsigned int linkProbingCapabilityVersion;
@property (nonatomic) unsigned int mediaControlInfoSubVersion;
@property (nonatomic) bool oneToOneModeSupported;
@property (nonatomic) unsigned int switches;

- (bool)SIPDisabled;
- (unsigned int)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCapabilities;
- (bool)hasLinkProbingCapabilityVersion;
- (bool)hasMediaControlInfoSubVersion;
- (bool)hasOneToOneModeSupported;
- (bool)hasSwitches;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)linkProbingCapabilityVersion;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (unsigned int)mediaControlInfoSubVersion;
- (void)mergeFrom:(id)arg1;
- (bool)oneToOneModeSupported;
- (bool)readFrom:(id)arg1;
- (bool)secureMessagingRequired;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setHasCapabilities:(bool)arg1;
- (void)setHasLinkProbingCapabilityVersion:(bool)arg1;
- (void)setHasMediaControlInfoSubVersion:(bool)arg1;
- (void)setHasOneToOneModeSupported:(bool)arg1;
- (void)setHasSwitches:(bool)arg1;
- (void)setLinkProbingCapabilityVersion:(unsigned int)arg1;
- (void)setMediaControlInfoSubVersion:(unsigned int)arg1;
- (void)setOneToOneModeSupported:(bool)arg1;
- (void)setSwitches:(unsigned int)arg1;
- (unsigned int)switches;
- (void)writeTo:(id)arg1;

@end

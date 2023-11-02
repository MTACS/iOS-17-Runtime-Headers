
@interface TUConversationParticipantCapabilities : NSObject <NSCopying, NSSecureCoding> {
    bool  _gftDowngradeToOneToOneAvailable;
    bool  _gondolaCallingAvailable;
    bool  _momentsAvailable;
    bool  _personaAvailable;
    bool  _screenSharingAvailable;
    unsigned long long  _sharePlayProtocolVersion;
    bool  _supportsLeaveContext;
    bool  _uPlusNDowngradeAvailable;
    bool  _uPlusOneAVLessAvailable;
    bool  _uPlusOneScreenShareAvailable;
    unsigned long long  _visionCallEstablishmentVersion;
    unsigned long long  _visionFeatureVersion;
}

@property (getter=isGFTDowngradeToOneToOneAvailable, nonatomic) bool gftDowngradeToOneToOneAvailable;
@property (getter=isGondolaCallingAvailable, nonatomic) bool gondolaCallingAvailable;
@property (getter=isMirageAvailable, nonatomic, readonly) bool mirageAvailable;
@property (getter=isMomentsAvailable, nonatomic) bool momentsAvailable;
@property (getter=isPersonaAvailable, nonatomic) bool personaAvailable;
@property (getter=isScreenSharingAvailable, nonatomic) bool screenSharingAvailable;
@property (nonatomic) unsigned long long sharePlayProtocolVersion;
@property (nonatomic) bool supportsLeaveContext;
@property (getter=isUPlusNDowngradeAvailable, nonatomic) bool uPlusNDowngradeAvailable;
@property (getter=isUPlusOneAVLessAvailable, nonatomic) bool uPlusOneAVLessAvailable;
@property (getter=isUPlusOneScreenShareAvailable, nonatomic) bool uPlusOneScreenShareAvailable;
@property (nonatomic) unsigned long long visionCallEstablishmentVersion;
@property (nonatomic) unsigned long long visionFeatureVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilities:(id)arg1;
- (bool)isGFTDowngradeToOneToOneAvailable;
- (bool)isGondolaCallingAvailable;
- (bool)isMirageAvailable;
- (bool)isMomentsAvailable;
- (bool)isPersonaAvailable;
- (bool)isScreenSharingAvailable;
- (bool)isUPlusNDowngradeAvailable;
- (bool)isUPlusOneAVLessAvailable;
- (bool)isUPlusOneScreenShareAvailable;
- (void)setGftDowngradeToOneToOneAvailable:(bool)arg1;
- (void)setGondolaCallingAvailable:(bool)arg1;
- (void)setMomentsAvailable:(bool)arg1;
- (void)setPersonaAvailable:(bool)arg1;
- (void)setScreenSharingAvailable:(bool)arg1;
- (void)setSharePlayProtocolVersion:(unsigned long long)arg1;
- (void)setSupportsLeaveContext:(bool)arg1;
- (void)setUPlusNDowngradeAvailable:(bool)arg1;
- (void)setUPlusOneAVLessAvailable:(bool)arg1;
- (void)setUPlusOneScreenShareAvailable:(bool)arg1;
- (void)setVisionCallEstablishmentVersion:(unsigned long long)arg1;
- (void)setVisionFeatureVersion:(unsigned long long)arg1;
- (unsigned long long)sharePlayProtocolVersion;
- (bool)supportsLeaveContext;
- (unsigned long long)visionCallEstablishmentVersion;
- (unsigned long long)visionFeatureVersion;

@end

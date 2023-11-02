
@interface NFFieldNotificationECP2_0 : NFFieldNotification <NSCopying> {
    NSData * _homeKitSchemeDataPayload;
    bool  _ignoreRFTechOnIsEqual;
    bool  _odaRequired;
    NSData * _openLoopSchemeBitfield;
    unsigned int  _pairingMode;
    NSData * _readerIdentifier;
    NSArray * _tciArray;
    unsigned char  _terminalSubType;
    unsigned long long  _terminalType;
    NSData * _terminalTypeData;
    NSMutableDictionary * _userInfo;
}

@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (nonatomic) bool ignoreRFTechOnIsEqual;
@property (readonly) bool odaRequired;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (nonatomic, readonly) unsigned int pairingMode;
@property (nonatomic, readonly) NSData *readerIdentifier;
@property (readonly, retain) NSArray *tciArray;
@property (readonly) unsigned char terminalSubType;
@property (readonly) unsigned long long terminalType;
@property (readonly) NSData *terminalTypeData;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parseCHTerminalTypeData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitSchemeDataPayload;
- (bool)ignoreRFTechOnIsEqual;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNotificationType:(unsigned long long)arg1 rfTechnology:(unsigned int)arg2 typeFSystemCode:(unsigned short)arg3 creationDate:(id)arg4 cachedBeforeRFReset:(bool)arg5 odaRequired:(bool)arg6 terminalType:(unsigned long long)arg7 terminalSubType:(unsigned char)arg8 tciArray:(id)arg9 openLoopSchemeBitfield:(id)arg10 homeKitSchemeDataPayload:(id)arg11 readerIdentifier:(id)arg12 pairingMode:(unsigned int)arg13 terminalTypeData:(id)arg14 ignoreRFTechOnIsEqual:(bool)arg15 userInfo:(id)arg16;
- (bool)isEqual:(id)arg1;
- (bool)odaRequired;
- (id)openLoopSchemeBitfield;
- (unsigned int)pairingMode;
- (id)readerIdentifier;
- (void)setIgnoreRFTechOnIsEqual:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)tciArray;
- (unsigned char)terminalSubType;
- (unsigned long long)terminalType;
- (id)terminalTypeData;
- (id)userInfo;

@end

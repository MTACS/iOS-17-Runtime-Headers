
@interface NFFieldNotificationECP1_0 : NFFieldNotification <NSCopying> {
    bool  _ignoreRFTechOnIsEqual;
    bool  _odaRequired;
    unsigned int  _terminalMode;
    unsigned int  _terminalType;
}

@property (nonatomic) bool ignoreRFTechOnIsEqual;
@property (readonly) bool odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreRFTechOnIsEqual;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryForDavenport:(id)arg1;
- (id)initWithNotificationType:(unsigned long long)arg1 rfTechnology:(unsigned int)arg2 typeFSystemCode:(unsigned short)arg3 creationDate:(id)arg4 cachedBeforeRFReset:(bool)arg5 odaRequired:(bool)arg6 terminalMode:(unsigned int)arg7 terminalType:(unsigned int)arg8 ignoreRFTechOnIsEqual:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (bool)odaRequired;
- (void)setIgnoreRFTechOnIsEqual:(bool)arg1;
- (unsigned int)terminalMode;
- (unsigned int)terminalType;

@end

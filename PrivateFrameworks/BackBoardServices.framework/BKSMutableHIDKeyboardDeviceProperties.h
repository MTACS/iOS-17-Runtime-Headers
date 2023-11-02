
@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties

@property (nonatomic) bool capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic) unsigned char countryCode;
@property (nonatomic) bool globeKeyLabelHasGlobeSymbol;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *layout;
@property (nonatomic) unsigned int standardType;
@property (nonatomic) long long subinterfaceID;
@property (nonatomic, copy) NSString *transport;

- (void)setCapsLockKeyHasLanguageSwitchLabel:(bool)arg1;
- (void)setCountryCode:(unsigned char)arg1;
- (void)setGlobeKeyLabelHasGlobeSymbol:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setStandardType:(unsigned int)arg1;
- (void)setSubinterfaceID:(long long)arg1;
- (void)setTransport:(id)arg1;

@end

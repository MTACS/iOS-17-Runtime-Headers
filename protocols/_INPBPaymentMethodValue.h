
@protocol _INPBPaymentMethodValue <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasIcon;
- (bool)hasIdentificationHint;
- (bool)hasName;
- (bool)hasType;
- (bool)hasValueMetadata;
- (_INPBImageValue *)icon;
- (NSString *)identificationHint;
- (NSString *)name;
- (void)setHasType:(bool)arg1;
- (void)setIcon:(_INPBImageValue *)arg1;
- (void)setIdentificationHint:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end


@protocol _INPBBillPayeeValue <NSObject>

@required

- (NSString *)accountNumber;
- (bool)hasAccountNumber;
- (bool)hasNickname;
- (bool)hasOrganizationName;
- (bool)hasValueMetadata;
- (_INPBDataString *)nickname;
- (_INPBDataString *)organizationName;
- (void)setAccountNumber:(NSString *)arg1;
- (void)setNickname:(_INPBDataString *)arg1;
- (void)setOrganizationName:(_INPBDataString *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end

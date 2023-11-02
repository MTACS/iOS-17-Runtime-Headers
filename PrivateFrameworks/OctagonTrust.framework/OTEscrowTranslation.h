
@interface OTEscrowTranslation : NSObject

+ (id)CDPRecordContextToDictionary:(id)arg1;
+ (id)_dateWithSecureBackupDateString:(id)arg1;
+ (id)_stringWithSecureBackupDate:(id)arg1;
+ (id)cdpRecoveryInformationToDictionary:(id)arg1;
+ (id)dictionaryToCDPRecordContext:(id)arg1;
+ (id)dictionaryToCDPRecoveryInformation:(id)arg1;
+ (id)dictionaryToEscrowAuthenticationInfo:(id)arg1;
+ (id)dictionaryToEscrowRecord:(id)arg1;
+ (id)dictionaryToMetadata:(id)arg1;
+ (id)escrowAuthenticationInfoToDictionary:(id)arg1;
+ (id)escrowRecordToDictionary:(id)arg1;
+ (id)metadataToDictionary:(id)arg1;
+ (bool)supportedRestorePath:(id)arg1;

@end

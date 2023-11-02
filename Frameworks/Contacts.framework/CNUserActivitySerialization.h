
@interface CNUserActivitySerialization : NSObject

+ (id)allAvailableServerUUIDsForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)distinctEmailAddressesForContact:(id)arg1;
+ (id)distinctPhoneNumbersForContact:(id)arg1;
+ (id)fullNameForContact:(id)arg1;
+ (bool)isContactACompany:(id)arg1;
+ (id)userActivityPayloadWithContacts:(id)arg1 shouldUnify:(bool)arg2;
+ (id)userActivityTitleWithContacts:(id)arg1;

@end

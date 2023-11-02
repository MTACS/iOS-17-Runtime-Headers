
@interface PXRecipientTransportUtilities : NSObject

+ (bool)px_IsEmailAddress:(id)arg1 equalToEmailAddress:(id)arg2;
+ (bool)px_IsValidEmailAddress:(id)arg1;
+ (id)px_bestMessagingTransportForContact:(id)arg1;
+ (long long)px_recipientKindFromString:(id)arg1;
+ (id)px_validPhoneNumberFromString:(id)arg1;

@end

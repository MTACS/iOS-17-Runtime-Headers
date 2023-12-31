
@interface EAEmailAddressLists : NSObject

+ (id)addressDisplayStringWithMaxNumberOfAddresses:(unsigned long long)arg1 fromAddressList:(id)arg2;
+ (id)addressListFromAddressString:(id)arg1;
+ (id)addressListFromHeaderValue:(id)arg1;
+ (id)addressStringFromAddressList:(id)arg1;
+ (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1 forString:(id)arg2;
+ (id)componentsSeparatedByCommaRespectingQuotesAndParensForString:(id)arg1;
+ (id)displayNameFromAddressList:(id)arg1;
+ (id)rawAddressListFromFullAddressList:(id)arg1;

@end

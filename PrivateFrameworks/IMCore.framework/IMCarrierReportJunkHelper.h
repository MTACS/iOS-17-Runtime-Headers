
@interface IMCarrierReportJunkHelper : NSObject

+ (bool)canReportJunkOverCellularServiceOfMessageItem:(id)arg1;
+ (void)collectReportJunkMetricsForJunkMessageItem:(id)arg1 junkChatStyle:(unsigned char)arg2 totalMessagesInThread:(unsigned long long)arg3;
+ (id)createJunkReportMessageBodyTextForMessageItem:(id)arg1 junkChatStyle:(unsigned char)arg2;
+ (id)createJunkReportMessageItemBodyForMessageItem:(id)arg1 junkChatStyle:(unsigned char)arg2;
+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)isReportJunkServiceAllowedForMessageItem:(id)arg1 junkChatStyle:(unsigned char)arg2;
+ (id)jsonSerializeDictionary:(id)arg1;
+ (id)junkReportMessageItemForMessageItem:(id)arg1 account:(id)arg2 junkChatStyle:(unsigned char)arg3;
+ (id)receiveDateForMessageItem:(id)arg1;
+ (id)reportJunkCarrierAddressForMessageItem:(id)arg1 junkChatStyle:(unsigned char)arg2;
+ (void)setHandleParametersOfMessageItem:(id)arg1 usingAccount:(id)arg2 usingMessageItem:(id)arg3 junkChatStyle:(unsigned char)arg4;
+ (bool)userInHomeCountryWithDestinationCallerID:(id)arg1;
+ (bool)validateReportJunkCarrierAddress:(id)arg1;
+ (bool)wifiCallingEnabledForDestinationCallerID:(id)arg1;

@end

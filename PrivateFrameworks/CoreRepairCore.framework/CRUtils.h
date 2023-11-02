
@interface CRUtils : NSObject

+ (bool)foundInMultiRequestError:(id)arg1 dataClass:(id)arg2 dataInstance:(id)arg3;
+ (id)getInnermostNSError:(id)arg1;
+ (int)getInnermostNSErrorCode:(id)arg1;

- (id)convertDataToHexInDictionary:(id)arg1;
- (bool)currentProcessHasEntitlement:(id)arg1;
- (id)getAPTicket;
- (id)getPathForApTicketWithError:(id*)arg1;
- (bool)hasEntitlementBoolForTag:(unsigned int)arg1 inAPTicket:(id)arg2;
- (bool)isHorizonRamdiskBootInApticket:(id)arg1;

@end

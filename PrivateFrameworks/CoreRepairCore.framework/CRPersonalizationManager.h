
@interface CRPersonalizationManager : NSObject {
    struct __AMAuthInstall { } * amai;
    NSDictionary * personalizationMap;
}

+ (bool)IsTatsuErrorNetworkingRelated:(long long)arg1;
+ (struct __CFNumber { }*)_copySikaFuse;
+ (struct __AMAuthInstall { }*)createBaseAMAIObject;
+ (id)defaultManager;
+ (struct __AMAuthInstall { }*)getDefaultAMAuthInstallRef;
+ (id)initWithAuthInstallObj:(struct __AMAuthInstall { }*)arg1;

- (void).cxx_destruct;
- (id)_init:(struct __AMAuthInstall { }*)arg1;
- (bool)_personalizeWithElement:(id)arg1 useCache:(bool)arg2 parsedResponseData:(id*)arg3 error:(id*)arg4;
- (bool)addCustomPersonalizationElementWithId:(id)arg1 personalizationElement:(id)arg2 error:(id*)arg3;
- (bool)getApTicketForLthTransferWithOptions:(id)arg1 apTicketData:(id*)arg2 error:(id*)arg3;
- (bool)getApTicketForMesaPairing:(id*)arg1 error:(id*)arg2;
- (bool)getBMUTicketForVeridianFWUpdateWithOptions:(id)arg1 BMUTicket:(id*)arg2 error:(id*)arg3;
- (bool)getPDIAPTicketUsingCache:(bool)arg1 apTicketData:(id*)arg2 error:(id*)arg3;
- (bool)getRemoteTrustObjectDigestWithExistedDigest:(id)arg1 digestData:(id*)arg2 error:(id*)arg3;
- (bool)getSavageTicketForSavageFWUpdateWithOptions:(id)arg1 SavageTicket:(id*)arg2 error:(id*)arg3;
- (bool)getYonkersTicketForYonkersFWUpdateWithOptions:(id)arg1 YonkersTicket:(id*)arg2 error:(id*)arg3;
- (id)init;
- (bool)personalizeVeridianWithError:(id*)arg1 parsedResponseData:(id*)arg2;
- (bool)personalizeWithElements:(id)arg1 error:(id*)arg2;

@end

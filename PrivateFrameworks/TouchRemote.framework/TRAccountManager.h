
@interface TRAccountManager : NSObject

+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForICloudService;
+ (id)_idmsAccountForITunesService;
+ (id)_primaryGameCenterAccount;
+ (id)_primaryICloudAccount;
+ (id)_primaryITunesAccount;
+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;
+ (id)idmsAccountForAccountService:(unsigned long long)arg1;

@end

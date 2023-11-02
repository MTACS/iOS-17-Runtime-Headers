
@interface PCSAccountsModel : NSObject {
    bool  _accountsChanged;
    NSString * _dsid;
    NSString * _identifier;
    NSString * _lastError;
    NSObject<OS_dispatch_queue> * _queue;
    ACAccountStore * _store;
    NSString * _username;
}

@property bool accountsChanged;
@property (readonly) NSString *dsid;
@property (readonly) NSString *identifier;
@property (readonly) NSString *lastError;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) ACAccountStore *store;
@property (readonly) NSString *username;

+ (id)accountForCurrentPersona;
+ (id)altDSIDForDSID:(id)arg1;
+ (bool)currentPersonaSupportsPrimaryAccount:(id*)arg1;
+ (id)defaultAccountsModel;
+ (id)settingsKeyForKey:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (bool)accountsChanged;
- (id)dsid;
- (void)faultIfCurrentPersonaIsDataSeparated;
- (id)identifier;
- (id)init;
- (id)lastError;
- (id)queue;
- (void)setAccountsChanged:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)update;
- (id)username;

@end

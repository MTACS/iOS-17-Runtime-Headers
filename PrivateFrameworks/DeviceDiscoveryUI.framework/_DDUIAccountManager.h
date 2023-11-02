
@interface _DDUIAccountManager : NSObject {
    bool  _enabled;
    NSMutableDictionary * _iCloudToAltDSIDDictionary;
    NSMutableDictionary * _iCloudToNameComponentsDictionary;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSMutableDictionary *iCloudToAltDSIDDictionary;
@property (nonatomic, retain) NSMutableDictionary *iCloudToNameComponentsDictionary;

- (void).cxx_destruct;
- (void)_findMemberForiCloudAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateMemberDataForiCloudAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)altDsidForiCloudAccount:(id)arg1 completion:(id /* block */)arg2;
- (bool)enabled;
- (id)iCloudToAltDSIDDictionary;
- (id)iCloudToNameComponentsDictionary;
- (id)init;
- (void)nameComponentsForiCloudAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setICloudToAltDSIDDictionary:(id)arg1;
- (void)setICloudToNameComponentsDictionary:(id)arg1;

@end


@interface OspreyPreferences : NSObject {
    OspreyKeychain * _keychain;
}

- (void).cxx_destruct;
- (id)connectionPreferencesForHost:(id)arg1;
- (id)connections;
- (void)deleteConnectionPreferencesForHost:(id)arg1;
- (id)initWithKeychain:(id)arg1;
- (void)setConnectionPreferences:(id)arg1;
- (void)synchronize;

@end

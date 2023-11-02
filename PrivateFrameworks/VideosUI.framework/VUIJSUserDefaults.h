
@interface VUIJSUserDefaults : VUIJSObject <VUIJSUserDefaults> {
    <VUIAppUserDefaultsStoring> * _userDefaultsStorage;
}

@property (nonatomic) <VUIAppUserDefaultsStoring> *userDefaultsStorage;

- (void).cxx_destruct;
- (id)getData:(id)arg1;
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;
- (void)removeData:(id)arg1;
- (void)setData:(id)arg1 :(id)arg2;
- (void)setUserDefaultsStorage:(id)arg1;
- (id)userDefaultsStorage;

@end

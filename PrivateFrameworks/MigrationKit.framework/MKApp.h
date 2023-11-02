
@interface MKApp : NSObject {
    NSString * _appStoreIdentifier;
    NSString * _bundleIdentifier;
    NSString * _category;
    NSString * _developer;
    NSString * _iconURL;
    NSString * _iconURLForAppStore;
    NSString * _iconURLForiPad;
    NSString * _iconURLForiPadPro;
    NSString * _iconURLForiPhone2x;
    NSString * _iconURLForiPhone3x;
    bool  _isFree;
    NSString * _name;
}

@property (nonatomic, copy) NSString *appStoreIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *developer;
@property (nonatomic, copy) NSString *iconURL;
@property (nonatomic, copy) NSString *iconURLForAppStore;
@property (nonatomic, copy) NSString *iconURLForiPad;
@property (nonatomic, copy) NSString *iconURLForiPadPro;
@property (nonatomic, copy) NSString *iconURLForiPhone2x;
@property (nonatomic, copy) NSString *iconURLForiPhone3x;
@property (nonatomic) bool isFree;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)appStoreIdentifier;
- (id)bundleIdentifier;
- (id)category;
- (id)developer;
- (id)iconURL;
- (id)iconURLForAppStore;
- (id)iconURLForiPad;
- (id)iconURLForiPadPro;
- (id)iconURLForiPhone2x;
- (id)iconURLForiPhone3x;
- (id)initWithBundleIdentifier:(id)arg1 appStoreIdentifier:(id)arg2 isFree:(bool)arg3;
- (id)initWithJSONData:(id)arg1;
- (bool)isFree;
- (id)name;
- (void)setAppStoreIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDeveloper:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIconURLForAppStore:(id)arg1;
- (void)setIconURLForiPad:(id)arg1;
- (void)setIconURLForiPadPro:(id)arg1;
- (void)setIconURLForiPhone2x:(id)arg1;
- (void)setIconURLForiPhone3x:(id)arg1;
- (void)setIsFree:(bool)arg1;
- (void)setName:(id)arg1;

@end

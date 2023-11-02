
@interface PRSPosterUpdateSessionInfo : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _identifier;
    WFWallpaperConfiguration * _shortcutsWallpaperConfiguration;
    long long  _shortcutsWallpaperConfigurationSandboxHandle;
    NSObject<OS_xpc_object> * _shortcutsWallpaperConfigurationSandboxToken;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) WFWallpaperConfiguration *shortcutsWallpaperConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (void)setIdentifier:(id)arg1;
- (void)setShortcutsWallpaperConfiguration:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)shortcutsWallpaperConfiguration;
- (id)userInfo;

@end


@interface GCGameIntentSettings : NSObject <NSSecureCoding> {
    long long  _appLibraryPod;
    bool  _enabled;
    NSString * _gameBundleID;
    long long  _type;
}

@property (nonatomic) long long appLibraryPod;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *gameBundleID;
@property (nonatomic) long long type;

+ (id)appLibrarySettings:(bool)arg1 appLibraryPod:(long long)arg2;
+ (id)gameSettings:(bool)arg1 gameBundleID:(id)arg2;
+ (id)homeScreenSettings:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appLibraryPod;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)gameBundleID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAppLibraryPod:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGameBundleID:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end

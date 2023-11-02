
@interface WFDevice : NSObject <WFNaming> {
    NSArray * _capabilities;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _capabilitiesLock;
}

@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } capabilitiesLock;
@property (nonatomic, readonly) long long chipID;
@property (nonatomic, readonly) bool hasSystemAperture;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) bool isChineseRegionCelluarDevice;
@property (nonatomic, readonly) NSString *localStorageDisplayName;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *localizedWiFiDisplayName;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, readonly) double screenCornerRadius;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *systemBuildNumber;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)currentDevice;
+ (bool)deviceIsGreenTea;
+ (id)systemShortcutsUserDefaults;

- (void).cxx_destruct;
- (id)capabilities;
- (struct os_unfair_lock_s { unsigned int x1; })capabilitiesLock;
- (long long)chipID;
- (id)description;
- (bool)hasCapability:(id)arg1;
- (bool)hasSystemAperture;
- (id)hostname;
- (long long)idiom;
- (bool)idiomSupportsPosters:(long long)arg1;
- (id)init;
- (bool)isChineseRegionCelluarDevice;
- (id)localStorageDisplayName;
- (id)localizedModel;
- (id)localizedWiFiDisplayName;
- (id)marketingName;
- (id)model;
- (id)name;
- (long long)platform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenCornerRadius;
- (double)screenScale;
- (id)symbolName;
- (id)systemBuildNumber;
- (id)systemName;
- (id)systemVersion;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (void)getAppearanceWithCompletion:(id /* block */)arg1;
- (void)getBrightnessWithCompletion:(id /* block */)arg1;
- (id)volumeWithError:(id*)arg1;

@end

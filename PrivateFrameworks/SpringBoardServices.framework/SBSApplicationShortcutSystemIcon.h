
@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {
    NSString * _systemImageName;
    long long  _type;
}

@property (nonatomic, readonly) UIImage *sbh_image;
@property (nonatomic, readonly) UIImage *sbh_systemImage;
@property (nonatomic, readonly) NSString *systemImageName;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/ShortcutUIKit.framework/ShortcutUIKit

- (id)_scui_iconImageName;
- (id)_scui_iconImageWithAssetProvider:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)sbh_defaultImage;

- (id)sbh_image;
- (id)sbh_systemImage;

@end

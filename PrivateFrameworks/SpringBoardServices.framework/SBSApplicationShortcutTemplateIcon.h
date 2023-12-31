
@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon {
    NSString * _templateImageName;
}

@property (nonatomic, readonly) NSString *templateImageName;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTemplateImageName:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)templateImageName;

// Image: /System/Library/PrivateFrameworks/ShortcutUIKit.framework/ShortcutUIKit

- (id)_scui_iconImageWithAssetProvider:(id)arg1;

@end

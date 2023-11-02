
@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon {
    NSString * _systemImageName;
}

@property (nonatomic, readonly) NSString *systemImageName;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)sbh_defaultImage;

- (id)sbh_image;
- (id)sbh_systemImage;

@end

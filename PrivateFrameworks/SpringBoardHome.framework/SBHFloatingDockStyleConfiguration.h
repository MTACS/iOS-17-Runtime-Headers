
@interface SBHFloatingDockStyleConfiguration : NSObject <NSCopying> {
    unsigned long long  _backgroundEffect;
    unsigned long long  _folderIconBackgroundStyle;
    unsigned long long  _platterEffect;
    bool  _wantsPlatterShadow;
}

@property (nonatomic, readonly) unsigned long long backgroundEffect;
@property (nonatomic, readonly) unsigned long long folderIconBackgroundStyle;
@property (nonatomic, readonly) unsigned long long platterEffect;
@property (nonatomic, readonly) bool wantsPlatterShadow;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)defaultConfiguration;

- (unsigned long long)backgroundEffect;
- (id)configurationWithWantsPlatterShadow:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)folderIconBackgroundStyle;
- (id)init;
- (id)initWithBackgroundEffect:(unsigned long long)arg1 platterEffect:(unsigned long long)arg2 wantsPlatterShadow:(bool)arg3 folderIconBackgroundStyle:(unsigned long long)arg4;
- (unsigned long long)platterEffect;
- (bool)wantsPlatterShadow;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)configurationWithEnvironmentMode:(long long)arg1;

@end

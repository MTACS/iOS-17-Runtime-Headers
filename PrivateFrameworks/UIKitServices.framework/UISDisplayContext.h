
@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, _UIDisplayInfoProviding> {
    unsigned long long  _artworkSubtype;
    FBSDisplayConfiguration * _displayConfiguration;
    UISApplicationSupportDisplayEdgeInfo * _displayEdgeInfo;
    UISDisplayShape * _exclusionArea;
    unsigned long long  _userInterfaceStyle;
}

@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (nonatomic, readonly) <_UIDisplayInfoShape> *exclusionArea;
@property (nonatomic, readonly) UISDisplayShape *exclusionArea;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) unsigned long long userInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)_initWithDisplayContext:(id)arg1;
- (unsigned long long)artworkSubtype;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayConfiguration;
- (id)displayEdgeInfo;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)exclusionArea;
- (unsigned long long)hash;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2 exclusionArea:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)userInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_defaultContextForDisplayConfiguration:(id)arg1;
+ (id)sb_embeddedDisplayDefaultContext;
+ (id)sb_mainThreadFree_embeddedDisplayDefaultContext;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_loadedInitialContext;

- (double)homeAffordanceOverlayAllowance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (double)systemMinimumMargin;

@end


@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned int  _connectionSeed;
    long long  _connectionType;
    unsigned int  _displayID;
    bool  _external;
    bool  _mainLike;
    int  _pid;
    FBSDisplayIdentity * _rootIdentity;
    bool  _secure;
    long long  _type;
    NSString * _uniqueIdentifier;
}

@property (getter=isUIKitMainLike, nonatomic, readonly) bool UIKitMainLike;
@property (getter=isCarDisplay, nonatomic, readonly) bool carDisplay;
@property (getter=isCarInstrumentsDisplay, nonatomic, readonly) bool carInstrumentsDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRootIdentity;
@property (getter=isMainDisplay, nonatomic, readonly) bool mainDisplay;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *rootIdentity;
@property (nonatomic, readonly) long long sb_displayWindowingMode;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 UIKitMainLike:(bool)arg2 displayID:(unsigned int)arg3 connectionType:(long long)arg4 connectionSeed:(unsigned int)arg5 pid:(int)arg6 external:(bool)arg7 uniqueIdentifier:(id)arg8 secure:(bool)arg9 root:(id)arg10;
- (unsigned int)connectionSeed;
- (long long)connectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)expectsSecureRendering;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isAirPlayDisplay;
- (bool)isCarDisplay;
- (bool)isCarInstrumentsDisplay;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isMainDisplay;
- (bool)isMainRootDisplay;
- (bool)isMusicOnlyDisplay;
- (bool)isRestrictedAirPlayDisplay;
- (bool)isRootIdentity;
- (bool)isUIKitMainLike;
- (bool)isiPodOnlyDisplay;
- (int)pid;
- (id)rootIdentity;
- (long long)type;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)UIScreen;
- (bool)_sb_nonInteractiveAvailableWithSwitcher:(id)arg1 applicationController:(id)arg2 authenticationState:(bool)arg3;
- (bool)_sb_requiresAppRunningFirst;
- (bool)_sb_requiresBaselineController;
- (bool)_sb_requiresUserAuthenticationFirst;
- (bool)_sb_supportsExtendedDisplayMode;
- (id)currentConfiguration;
- (long long)sb_displayWindowingMode;
- (bool)sb_physicalDisplaySupportingNonInteractiveDisplayMode;

@end

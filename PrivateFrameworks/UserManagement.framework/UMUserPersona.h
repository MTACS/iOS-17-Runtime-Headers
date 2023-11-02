
@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {
    unsigned int  _gid;
    bool  _isDataSeparatedPersona;
    bool  _isDefaultPersona;
    bool  _isDisabled;
    bool  _isEnterprisePersona;
    bool  _isGuestPersona;
    bool  _isPersonalPersona;
    bool  _isSystemPersona;
    unsigned int  _uid;
    NSString * _userPersonaNickName;
    unsigned long long  _userPersonaType;
    NSString * _userPersonaUniqueString;
    NSString * personaName;
    bool  shouldFetchAttributes;
}

@property (nonatomic) unsigned int gid;
@property (nonatomic) bool isDataSeparatedPersona;
@property (nonatomic) bool isDefaultPersona;
@property (nonatomic) bool isDisabled;
@property (nonatomic) bool isEnterprisePersona;
@property (nonatomic) bool isGuestPersona;
@property (nonatomic) bool isPersonalPersona;
@property (nonatomic) bool isSystemPersona;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSString *userPersonaNickName;
@property (nonatomic) unsigned long long userPersonaType;
@property (nonatomic, copy) NSString *userPersonaUniqueString;

// Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement

+ (id)currentPersona;
+ (bool)currentPersonaMatchesPath:(id)arg1;

- (void).cxx_destruct;
- (bool)commitChanges;
- (bool)commitChangesWithError:(id*)arg1;
- (id)copyCurrentPersonaContextWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1;
- (id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1;
- (id)generateAndRestorePersonaContextWithIdentityString:(id)arg1;
- (id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1;
- (unsigned int)gid;
- (id)init;
- (bool)isDataSeparatedPersona;
- (bool)isDefaultPersona;
- (bool)isDisabled;
- (bool)isEnterprisePersona;
- (bool)isEqualToPersona:(id)arg1;
- (bool)isGuestPersona;
- (bool)isPersonalPersona;
- (bool)isSystemPersona;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)restorePersonaWithSavedPersonaContext:(id)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setIsDataSeparatedPersona:(bool)arg1;
- (void)setIsDefaultPersona:(bool)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsEnterprisePersona:(bool)arg1;
- (void)setIsGuestPersona:(bool)arg1;
- (void)setIsPersonalPersona:(bool)arg1;
- (void)setIsSystemPersona:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUserPersonaNickName:(id)arg1;
- (void)setUserPersonaType:(unsigned long long)arg1;
- (void)setUserPersonaUniqueString:(id)arg1;
- (unsigned int)uid;
- (id)userPersonaNickName;
- (unsigned long long)userPersonaType;
- (id)userPersonaUniqueString;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_personaID;

@end


@interface UMUserMutablePersona : UMUserPersona

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

- (bool)commitChanges;
- (bool)commitChangesWithError:(id*)arg1;

@end

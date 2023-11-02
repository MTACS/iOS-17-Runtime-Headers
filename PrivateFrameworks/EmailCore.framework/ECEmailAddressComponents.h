
@interface ECEmailAddressComponents : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying> {
    NSString * _displayName;
    NSString * _domain;
    NSArray * _groupList;
    NSString * _idnaDomain;
    NSString * _localPart;
    NSString * _simpleAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *displayName;
@property (copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) ECEmailAddress *emailAddressValue;
@property (copy) NSArray *groupList;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *idnaAddress;
@property (setter=setIDNADomain:, copy) NSString *idnaDomain;
@property (copy) NSString *localPart;
@property (readonly) NSString *simpleAddress;
@property (readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)componentsWithEmailAddress:(id)arg1;
+ (id)componentsWithString:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithString:(id)arg1 displayName:(id)arg2 localPart:(id)arg3 domain:(id)arg4 groupList:(id)arg5;
- (bool)_nts_getValidatedDomain:(id*)arg1 idnaDomain:(id*)arg2 avoidReparse:(bool)arg3;
- (bool)_nts_getValidatedLocalPart:(id*)arg1 domain:(id*)arg2 idnaDomain:(id*)arg3 displayName:(id*)arg4;
- (bool)_nts_isValid;
- (bool)_nts_isValidDomain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (id)domain;
- (id)ef_publicDescription;
- (id)emailAddressValue;
- (id)groupList;
- (unsigned long long)hash;
- (id)idnaAddress;
- (id)idnaDomain;
- (id)init;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localPart;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupList:(id)arg1;
- (void)setIDNADomain:(id)arg1;
- (void)setLocalPart:(id)arg1;
- (id)simpleAddress;
- (id)stringValue;

@end

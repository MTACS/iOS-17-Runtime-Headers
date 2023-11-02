
@interface CRKASMConcreteNameComponents : NSObject <CRKASMNameComponents> {
    NSString * _familyName;
    NSString * _fullName;
    NSString * _givenName;
    NSString * _givenNameFamilyInitial;
    NSString * _monogram;
    NSString * _phoneticFamilyName;
    NSString * _phoneticFullName;
    NSString * _phoneticGivenName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly, copy) NSString *givenNameFamilyInitial;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *monogram;
@property (nonatomic, readonly, copy) NSString *phoneticFamilyName;
@property (nonatomic, readonly, copy) NSString *phoneticFullName;
@property (nonatomic, readonly, copy) NSString *phoneticGivenName;
@property (readonly) Class superclass;

+ (id)makeFullNameWithComponents:(id)arg1;
+ (id)makeGivenNameFamilyInitialWithComponents:(id)arg1;
+ (id)makeMonogramWithComponents:(id)arg1;
+ (id)makeNameComponentsForPerson:(id)arg1;
+ (id)makePhoneticFullNameWithComponents:(id)arg1;
+ (id)sharedFormatter;
+ (id)stringFromNameComponents:(id)arg1 configurationBlock:(id /* block */)arg2 cleanupBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)familyName;
- (id)fullName;
- (id)givenName;
- (id)givenNameFamilyInitial;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)monogram;
- (id)phoneticFamilyName;
- (id)phoneticFullName;
- (id)phoneticGivenName;

@end

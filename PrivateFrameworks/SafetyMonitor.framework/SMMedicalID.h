
@interface SMMedicalID : NSObject <NSSecureCoding> {
    long long  _age;
    NSString * _allergiesAndRestrictions;
    NSString * _bloodType;
    NSSet * _emergencyContacts;
    long long  _height;
    NSUUID * _identifier;
    NSString * _medicalConditions;
    NSString * _medicalNotes;
    NSString * _name;
    NSString * _primaryLanguage;
    long long  _weight;
}

@property (nonatomic, readonly) long long age;
@property (nonatomic, readonly, copy) NSString *allergiesAndRestrictions;
@property (nonatomic, readonly, copy) NSString *bloodType;
@property (nonatomic, readonly, retain) NSSet *emergencyContacts;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *medicalConditions;
@property (nonatomic, readonly, copy) NSString *medicalNotes;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *primaryLanguage;
@property (nonatomic, readonly) long long weight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)age;
- (id)allergiesAndRestrictions;
- (id)bloodType;
- (id)description;
- (id)emergencyContacts;
- (void)encodeWithCoder:(id)arg1;
- (long long)height;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 age:(long long)arg2 allergiesAndRestrictions:(id)arg3 bloodType:(id)arg4 height:(long long)arg5 medicalConditions:(id)arg6 medicalNotes:(id)arg7 name:(id)arg8 primaryLanguage:(id)arg9 weight:(long long)arg10 emergencyContacts:(id)arg11;
- (id)medicalConditions;
- (id)medicalNotes;
- (id)name;
- (id)primaryLanguage;
- (long long)weight;

@end

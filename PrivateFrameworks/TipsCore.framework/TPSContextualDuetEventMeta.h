
@interface TPSContextualDuetEventMeta : TPSSerializableObject {
    NSString * _context;
    NSString * _domain;
    NSNumber * _donatedBySiri;
    NSString * _intentClass;
    NSNumber * _intentDirection;
    NSString * _intentVerb;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSNumber *donatedBySiri;
@property (nonatomic, copy) NSString *intentClass;
@property (nonatomic, copy) NSNumber *intentDirection;
@property (nonatomic, copy) NSString *intentVerb;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)domain;
- (id)donatedBySiri;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)intentClass;
- (id)intentDirection;
- (id)intentVerb;
- (void)setContext:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDonatedBySiri:(id)arg1;
- (void)setIntentClass:(id)arg1;
- (void)setIntentDirection:(id)arg1;
- (void)setIntentVerb:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end

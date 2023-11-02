
@interface BMNameComponents : NSObject <BMProtoBufWrapper> {
    NSString * _familyName;
    NSString * _givenName;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSString * _previousFamilyName;
}

@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *namePrefix;
@property (nonatomic, readonly) NSString *nameSuffix;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *previousFamilyName;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)familyName;
- (id)givenName;
- (id)initWithNamePrefix:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 previousFamilyName:(id)arg4 familyName:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)previousFamilyName;
- (id)proto;

@end

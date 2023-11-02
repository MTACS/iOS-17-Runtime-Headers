
@interface GDHMUserMock : NSObject {
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *userID;

- (void).cxx_destruct;
- (id)asHMUser;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)uniqueIdentifier;
- (id)userID;

@end

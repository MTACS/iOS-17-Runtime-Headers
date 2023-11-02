
@interface GDHMHomeMock : NSObject {
    HMUser * _currentUser;
    CLLocation * _location;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSArray * _users;
}

@property (nonatomic, copy) HMUser *currentUser;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSArray *users;

- (void).cxx_destruct;
- (id)asHMHome;
- (id)currentUser;
- (id)homeAccessControlForUser:(id)arg1;
- (id)location;
- (id)name;
- (void)setCurrentUser:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)uniqueIdentifier;
- (id)users;

@end

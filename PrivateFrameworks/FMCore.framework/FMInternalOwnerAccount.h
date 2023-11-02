
@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity> {
    NSString * _firstName;
    NSString * _lastName;
    NSString * _personId;
    NSString * _username;
}

@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *personId;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)description;
- (id)firstName;
- (id)initWithAccount:(id)arg1;
- (id)lastName;
- (id)personId;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPersonId:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end

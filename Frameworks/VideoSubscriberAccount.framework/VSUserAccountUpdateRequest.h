
@interface VSUserAccountUpdateRequest : NSObject {
    NSError * _updateError;
    VSUserAccount * _updatedUserAccount;
    VSUserAccount * _userAccount;
}

@property (nonatomic, retain) NSError *updateError;
@property (nonatomic, retain) VSUserAccount *updatedUserAccount;
@property (nonatomic, retain) VSUserAccount *userAccount;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUserAccount:(id)arg1;
- (void)setUpdateError:(id)arg1;
- (void)setUpdatedUserAccount:(id)arg1;
- (void)setUserAccount:(id)arg1;
- (id)updateError;
- (id)updatedUserAccount;
- (id)userAccount;

@end

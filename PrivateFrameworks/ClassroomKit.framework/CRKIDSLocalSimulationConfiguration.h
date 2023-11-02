
@interface CRKIDSLocalSimulationConfiguration : NSObject <NSSecureCoding> {
    bool  _shouldForceAccountsInactive;
    bool  _shouldForceRemoteUsersNotRegistered;
}

@property (nonatomic) bool shouldForceAccountsInactive;
@property (nonatomic) bool shouldForceRemoteUsersNotRegistered;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldForceAccountsInactive:(bool)arg1;
- (void)setShouldForceRemoteUsersNotRegistered:(bool)arg1;
- (bool)shouldForceAccountsInactive;
- (bool)shouldForceRemoteUsersNotRegistered;

@end

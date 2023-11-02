
@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions {
    NSNumber * _accountID;
    NSString * _appleID;
    NSArray * _bundleIDs;
}

@property (nonatomic, readonly) NSNumber *accountID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, copy) NSArray *bundleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)appleID;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1 appleID:(id)arg2;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIDs:(id)arg1;

@end

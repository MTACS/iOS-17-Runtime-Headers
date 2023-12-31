
@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id)userIdentityLookupInfos;

@end

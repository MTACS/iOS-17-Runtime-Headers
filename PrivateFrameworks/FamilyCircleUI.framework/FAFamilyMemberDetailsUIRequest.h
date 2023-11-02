
@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest {
    NSNumber * _memberDSID;
    NSString * _memberEmail;
}

@property (nonatomic, copy) NSNumber *memberDSID;
@property (nonatomic, copy) NSString *memberEmail;

- (void).cxx_destruct;
- (void)URLRequestWithCompletion:(id /* block */)arg1;
- (id)_endpoint;
- (id)_queryString;
- (bool)isUserInitiated;
- (id)memberDSID;
- (id)memberEmail;
- (void)setMemberDSID:(id)arg1;
- (void)setMemberEmail:(id)arg1;

@end

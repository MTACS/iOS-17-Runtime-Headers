
@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest {
    NSNumber * _memberDSID;
}

@property (readonly, copy) NSNumber *memberDSID;

- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)arg1;
- (id)memberDSID;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end

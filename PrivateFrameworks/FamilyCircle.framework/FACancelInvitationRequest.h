
@interface FACancelInvitationRequest : FAFamilyCircleRequest {
    NSString * _email;
    NSString * _familyID;
}

- (void).cxx_destruct;
- (id)initWith:(id)arg1 familyID:(id)arg2;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end

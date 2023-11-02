
@interface FAUpdateFamilyMemberFlagsRequest : FAFamilyCircleRequest {
    NSNumber * _dsid;
    NSDictionary * _flags;
}

- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)arg1 flags:(id)arg2;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end

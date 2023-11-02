
@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber * _dsid;
    bool  _enabled;
    NSDictionary * _ephemeralAuthResults;
    NSString * _flag;
}

@property (nonatomic, retain) NSDictionary *ephemeralAuthResults;

- (void).cxx_destruct;
- (id)ephemeralAuthResults;
- (id)initWithFamilyMemberDSID:(id)arg1 ephemeralAuthResults:(id)arg2 flag:(id)arg3 enabled:(bool)arg4;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(bool)arg3;
- (void)setEphemeralAuthResults:(id)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end

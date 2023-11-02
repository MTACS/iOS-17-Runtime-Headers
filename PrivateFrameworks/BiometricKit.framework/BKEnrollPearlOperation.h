
@interface BKEnrollPearlOperation : BKEnrollOperation {
    BKIdentity * _augmentedIdentity;
    bool  _clientToComplete;
    long long  _enrollmentType;
    long long  _periocularGlassesRequirement;
}

@property (nonatomic, retain) BKIdentity *augmentedIdentity;
@property (nonatomic) bool clientToComplete;
@property (nonatomic) <BKEnrollPearlOperationDelegate> *delegate;
@property (nonatomic) long long enrollmentType;
@property (nonatomic) long long periocularGlassesRequirement;

- (void).cxx_destruct;
- (id)augmentedIdentity;
- (bool)clientToComplete;
- (bool)completeWithError:(id*)arg1;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (id)enrollResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (long long)enrollmentType;
- (id)initWithDevice:(id)arg1;
- (id)optionsDictionaryWithError:(id*)arg1;
- (long long)periocularGlassesRequirement;
- (bool)resumeWithError:(id*)arg1;
- (void)setAugmentedIdentity:(id)arg1;
- (void)setClientToComplete:(bool)arg1;
- (void)setEnrollmentType:(long long)arg1;
- (void)setPeriocularGlassesRequirement:(long long)arg1;
- (bool)startWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (bool)suspendWithError:(id*)arg1;

@end

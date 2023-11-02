
@interface EXBDisplayDriverRecord : NSObject <BSDescriptionStreamable> {
    EXBDisplayAssertion * _assertion;
    <EXBDisplayControlling> * _controller;
    FBSDisplayIdentity * _displayIdentity;
    EXBDisplayProfile * _profile;
}

@property (nonatomic, readonly) EXBDisplayAssertion *assertion;
@property (nonatomic, readonly) <EXBDisplayControlling> *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EXBDisplayProfile *profile;
@property (nonatomic, readonly, copy) NSString *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)assertion;
- (void)associateController:(id)arg1 assertion:(id)arg2;
- (void)associateDisplay:(id)arg1;
- (id)controller;
- (id)description;
- (id)displayIdentity;
- (unsigned long long)hash;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 rootDisplay:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)profile;
- (id)state;

@end

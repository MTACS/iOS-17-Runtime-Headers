
@interface CPLPushPullGatekeeper : NSObject {
    CPLEngineStore * _store;
}

@property (nonatomic, readonly) CPLEngineStore *store;

- (void).cxx_destruct;
- (long long)checkPushedChange:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)store;

@end

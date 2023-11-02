
@interface ATXAnchorModelActionDetails : NSObject {
    NSString * _actionType;
    NSString * _bundleId;
    long long  _paramHash;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long paramHash;

- (void).cxx_destruct;
- (id)actionType;
- (id)bundleId;
- (id)init;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 paramHash:(long long)arg3;
- (long long)paramHash;

@end

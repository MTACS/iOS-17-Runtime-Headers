
@interface PCStatusConditionRateLimitedObject : NSObject {
    long long  _operation;
    NSDate * _setTime;
    NSUUID * _statusCondition;
}

@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly) NSDate *setTime;
@property (nonatomic, readonly) NSUUID *statusCondition;

- (void).cxx_destruct;
- (id)init:(id)arg1 at:(id)arg2 kind:(long long)arg3;
- (long long)operation;
- (id)setTime;
- (id)statusCondition;

@end

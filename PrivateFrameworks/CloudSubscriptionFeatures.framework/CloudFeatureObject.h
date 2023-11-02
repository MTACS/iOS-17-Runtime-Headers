
@interface CloudFeatureObject : NSObject {
    NSString * _accessToken;
    bool  _canUse;
    NSString * _featureID;
    NSNumber * _limit;
    long long  _status;
}

@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) bool canUse;
@property (nonatomic, readonly) NSString *featureID;
@property (nonatomic, readonly) NSNumber *limit;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)accessToken;
- (bool)canUse;
- (id)description;
- (id)featureID;
- (id)init;
- (id)initWithFeatureID:(id)arg1 status:(long long)arg2 canUse:(bool)arg3 accessToken:(id)arg4;
- (id)initWithFeatureID:(id)arg1 status:(long long)arg2 canUse:(bool)arg3 intValue:(long long)arg4 accessToken:(id)arg5;
- (id)initWithFeatureID:(id)arg1 status:(long long)arg2 canUse:(bool)arg3 limit:(id)arg4 accessToken:(id)arg5;
- (id)limit;
- (long long)status;
- (id)value;

@end

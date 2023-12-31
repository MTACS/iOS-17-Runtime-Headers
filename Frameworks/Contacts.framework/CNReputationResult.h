
@interface CNReputationResult : NSObject {
    CNReputationHandle * _handle;
    long long  _score;
}

@property (readonly, copy) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithHandle:(id)arg1 score:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)score;

@end

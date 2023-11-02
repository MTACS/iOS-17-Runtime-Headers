
@interface HDSeriesFreezeResult : NSObject {
    NSUUID * _frozenIdentifier;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSUUID *frozenIdentifier;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (id)frozenIdentifier;
- (id)initWithStatus:(long long)arg1 frozenIdentifier:(id)arg2;
- (long long)status;

@end

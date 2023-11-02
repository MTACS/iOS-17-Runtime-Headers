
@interface PDSResponse : NSObject {
    long long  _status;
    NSDictionary * _statusByUser;
    long long  _ttl;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSDictionary *statusByUser;
@property (nonatomic, readonly) long long ttl;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(long long)arg1 statusByUser:(id)arg2 ttl:(long long)arg3;
- (long long)status;
- (id)statusByUser;
- (long long)ttl;

@end

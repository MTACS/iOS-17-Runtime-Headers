
@interface HAPSuspendedAccessoryIP : HAPSuspendedAccessory {
    struct AsyncConnection { } * _connection;
    NSString * _dnsName;
    unsigned long long  _timeout;
    NSArray * _wakeTuples;
}

@property (nonatomic, retain) NSString *dnsName;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic, readonly) NSArray *wakeTuples;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeConnection;
- (id)_wakeWithTuple:(id)arg1 dnsName:(id)arg2;
- (void)dealloc;
- (id)dnsName;
- (id)initWithName:(id)arg1 identifier:(id)arg2 wakeTuples:(id)arg3 queue:(id)arg4;
- (void)setDnsName:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (unsigned long long)timeout;
- (id)wakeTuples;
- (void)wakeWithCompletion:(id /* block */)arg1;

@end

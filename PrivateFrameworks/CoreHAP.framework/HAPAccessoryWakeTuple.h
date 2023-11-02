
@interface HAPAccessoryWakeTuple : HMFObject {
    NSString * _wakeAddress;
    NSData * _wakePattern;
    long long  _wakePort;
}

@property (nonatomic, readonly) NSString *wakeAddress;
@property (nonatomic, readonly) NSData *wakePattern;
@property (nonatomic, readonly) long long wakePort;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPort:(long long)arg1 wakeAddress:(id)arg2 wakePattern:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)wakeAddress;
- (id)wakePattern;
- (long long)wakePort;

@end


@interface CKDPushToken : NSObject {
    NSString * _apsEnvironmentString;
    NSData * _apsToken;
}

@property (nonatomic, readonly, copy) NSString *apsEnvironmentString;
@property (nonatomic, readonly, copy) NSData *apsToken;

- (void).cxx_destruct;
- (id)apsEnvironmentString;
- (id)apsToken;
- (unsigned long long)hash;
- (id)initWithAPSEnvironmentString:(id)arg1 apsToken:(id)arg2;
- (bool)isEqual:(id)arg1;

@end

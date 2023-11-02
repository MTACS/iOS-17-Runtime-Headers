
@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying> {
    NSUUID * _idsDeviceID;
    unsigned long long  _reachability;
}

@property (nonatomic, retain) NSUUID *idsDeviceID;
@property (nonatomic) unsigned long long reachability;

+ (id)connectivityString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)idsDeviceID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reachability;
- (void)setIdsDeviceID:(id)arg1;
- (void)setReachability:(unsigned long long)arg1;

@end

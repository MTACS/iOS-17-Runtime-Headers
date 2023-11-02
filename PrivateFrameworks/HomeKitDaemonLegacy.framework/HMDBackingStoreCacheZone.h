
@interface HMDBackingStoreCacheZone : HMFObject {
    NSMutableArray * _actualGroups;
    long long  _zoneID;
    NSString * _zoneName;
}

@property (retain) NSMutableArray *actualGroups;
@property (readonly) NSArray *groups;
@property (readonly) long long zoneID;
@property (readonly) NSString *zoneName;

- (void).cxx_destruct;
- (id)actualGroups;
- (id)dumpDebug;
- (id)groups;
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;
- (void)setActualGroups:(id)arg1;
- (long long)zoneID;
- (id)zoneName;

@end

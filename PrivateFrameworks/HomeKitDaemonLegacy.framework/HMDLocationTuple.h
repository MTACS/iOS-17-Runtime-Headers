
@interface HMDLocationTuple : HMFObject {
    CLLocation * _location;
    unsigned long long  _reachableBTLEAccessoryCount;
    unsigned long long  _reachableIPAccessoryCount;
    unsigned long long  _reachableMediaAccessoryCount;
}

@property (readonly, copy) CLLocation *location;
@property (readonly) unsigned long long reachableBTLEAccessoryCount;
@property (readonly) unsigned long long reachableIPAccessoryCount;
@property (readonly) unsigned long long reachableMediaAccessoryCount;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithLocation:(id)arg1 reachableIPAccessoryCount:(unsigned long long)arg2 reachableBTLEAccessoryCount:(unsigned long long)arg3 reachableMediaAccessoryCount:(unsigned long long)arg4;
- (id)location;
- (unsigned long long)reachableBTLEAccessoryCount;
- (unsigned long long)reachableIPAccessoryCount;
- (unsigned long long)reachableMediaAccessoryCount;

@end

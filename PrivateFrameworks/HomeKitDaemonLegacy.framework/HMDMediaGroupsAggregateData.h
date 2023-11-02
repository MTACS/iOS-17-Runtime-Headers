
@interface HMDMediaGroupsAggregateData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying> {
    NSArray * _destinationControllersData;
    NSArray * _destinations;
    NSArray * _groups;
}

@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *destinations;
@property (copy) NSArray *groups;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)arg1;
- (id)decodeDestinationsWithEncodedDestinations:(id)arg1;
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)arg1;
- (id)description;
- (id)destinationControllersData;
- (id)destinations;
- (id)encodeToProtoBufferData;
- (id)encodedDestinationControllerEvents;
- (id)encodedDestinationEvents;
- (id)encodedMediaGroupEvents;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (unsigned long long)hash;
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2;
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2 groups:(id)arg3;
- (id)initWithProtoBufferData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sentinelDestination;
- (id)sentinelDestinationControllerData;
- (id)sentinelGroup;
- (id)sentinelIdentifier;
- (void)setDestinationControllersData:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setGroups:(id)arg1;

@end

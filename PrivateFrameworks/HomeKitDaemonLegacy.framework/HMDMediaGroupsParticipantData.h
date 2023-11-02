
@interface HMDMediaGroupsParticipantData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying> {
    NSArray * _backedUpGroups;
    HMMediaDestination * _destination;
    HMMediaDestinationControllerData * _destinationControllerData;
}

@property (copy) NSArray *backedUpGroups;
@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;

- (void).cxx_destruct;
- (id)backedUpGroups;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)destinationControllerData;
- (id)encodeToProtoBufferData;
- (unsigned long long)hash;
- (id)initWithDestination:(id)arg1 destinationControllerData:(id)arg2 backedUpGroups:(id)arg3;
- (id)initWithProtoBufferData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackedUpGroups:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationControllerData:(id)arg1;

@end

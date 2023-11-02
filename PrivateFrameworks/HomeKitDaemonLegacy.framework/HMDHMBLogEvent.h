
@interface HMDHMBLogEvent : HMMLogEvent {
    int  _containerType;
    int  _zoneType;
}

@property (readonly) int containerType;
@property (readonly) int zoneType;

- (int)containerType;
- (id)initWithCloudZoneID:(id)arg1;
- (int)zoneType;

@end

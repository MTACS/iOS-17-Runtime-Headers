
@interface AFCoreAnalyticsCrossDeviceEvent : NSObject <NSCopying> {
    NSString * _nearbyDevicesLoggingID;
    NSMutableDictionary * _nearbyDevicesPayloads;
}

@property (nonatomic, readonly, copy) NSString *nearbyDevicesLoggingID;
@property (nonatomic, retain) NSMutableDictionary *nearbyDevicesPayloads;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (void)_setTargetedDeviceContextIdentifier:(id)arg1 withAction:(id)arg2 payload:(id)arg3;
- (void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:(id)arg1 commandResultDescription:(id)arg2;
- (void)addNearbyDeviceContexts:(id)arg1 proximityInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithNearbyDevicesLoggingID:(id)arg1;
- (id)nearbyDevicesLoggingID;
- (id)nearbyDevicesPayloads;
- (void)setNearbyDevicesPayloads:(id)arg1;

@end

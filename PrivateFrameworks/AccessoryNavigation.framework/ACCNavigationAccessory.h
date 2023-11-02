
@interface ACCNavigationAccessory : NSObject {
    NSString * _accessoryUID;
    NSMutableDictionary * _componentListInternal;
    NSMutableDictionary * _objectDetectionComponentListInternal;
    ACCNavigationProvider * _provider;
}

@property (nonatomic, retain) NSString *accessoryUID;
@property (readonly) NSDictionary *componentList;
@property (retain) NSMutableDictionary *componentListInternal;
@property (retain) NSMutableDictionary *objectDetectionComponentListInternal;
@property (nonatomic, readonly) ACCNavigationProvider *provider;

- (void).cxx_destruct;
- (id)accessoryUID;
- (bool)componentIdListIsEnabled:(id)arg1;
- (id)componentList;
- (id)componentListForIdList:(id)arg1;
- (id)componentListInternal;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryUID:(id)arg1 provider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)iterateComponentIdList:(id)arg1 block:(id /* block */)arg2;
- (bool)objectDetectionComponentIdListIsEnabled:(id)arg1;
- (id)objectDetectionComponentList;
- (id)objectDetectionComponentListForIdList:(id)arg1;
- (id)objectDetectionComponentListInternal;
- (id)provider;
- (bool)requestedSourceNameForAnyComponent;
- (bool)requestedSourceSupportsRouteGuidanceForAnyComponent;
- (void)setAccessoryUID:(id)arg1;
- (void)setComponentListInternal:(id)arg1;
- (void)setObjectDetectionComponentListInternal:(id)arg1;
- (bool)supportsExitInfoForAnyComponent;
- (bool)supportsLaneGuidanceForAnyComponent;
- (bool)supportsTimeZoneOffsetForAnyComponent;
- (void)updateLaneGuidanceInfo:(id)arg1 componentList:(id)arg2;
- (void)updateManeuverInfo:(id)arg1 componentList:(id)arg2;
- (void)updateRouteGuidanceInfo:(id)arg1 componentList:(id)arg2;

@end

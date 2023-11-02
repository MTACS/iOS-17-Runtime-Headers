
@interface WFMediaRouteDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSString * _groupUID;
    bool  _isLocalDevice;
    NSString * _routeName;
    NSString * _routeUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *groupUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocalDevice;
@property (nonatomic, readonly, copy) NSString *routeName;
@property (nonatomic, readonly, copy) NSString *routeUID;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (bool)routeUID:(id)arg1 isEqualToRouteUID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (id)findMatchingRoute:(id)arg1;
- (id)groupUID;
- (id)initWithRouteUID:(id)arg1 groupUID:(id)arg2 routeName:(id)arg3 isLocalDevice:(bool)arg4;
- (bool)isEqualInRouteUIDs:(id)arg1;
- (bool)isLocalDevice;
- (id)routeName;
- (id)routeUID;

@end

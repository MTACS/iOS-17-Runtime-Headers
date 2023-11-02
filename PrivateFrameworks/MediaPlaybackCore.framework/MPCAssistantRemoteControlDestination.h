
@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying, NSSecureCoding> {
    NSString * _appBundleID;
    NSArray * _hashedOutputDeviceUIDs;
    void * _origin;
    bool  _originatingDeviceControl;
    NSString * _originatingOutputDeviceUID;
    NSArray * _outputDeviceUIDs;
    NSString * _outputGroupID;
    NSArray * _outputGroups;
    NSString * _playerID;
    bool  _singleGroup;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSArray *hashedOutputDeviceUIDs;
@property (nonatomic, readonly) void*origin;
@property (nonatomic, readonly) bool originatingDeviceControl;
@property (nonatomic, readonly) NSString *originatingOutputDeviceUID;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSString *outputGroupID;
@property (nonatomic, readonly) NSArray *outputGroups;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly) bool singleGroup;

+ (id)iBooksApplicationDestination;
+ (id)nowPlayingApplicationDestination;
+ (id)podcastsApplicationDestination;
+ (bool)supportsSecureCoding;
+ (id)systemMediaApplicationDestination;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (void)_getCompanionOrigin:(id /* block */)arg1;
- (id)appBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createPlayerPath;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hashedOutputDeviceUIDs;
- (id)init;
- (id)initWithAppBundleID:(id)arg1;
- (id)initWithAppBundleID:(id)arg1 playerID:(id)arg2 origin:(void*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void*)origin;
- (bool)originatingDeviceControl;
- (id)originatingOutputDeviceUID;
- (id)outputDeviceUIDs;
- (id)outputGroupID;
- (id)outputGroups;
- (id)playerID;
- (void)resolveWithHashedRouteIdentifiers:(id)arg1 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg2 completion:(id /* block */)arg3;
- (void)resolveWithHashedRouteIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(bool)arg3 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg4 completion:(id /* block */)arg5;
- (void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(bool)arg3 completion:(id /* block */)arg4;
- (void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(bool)arg3 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg4 completion:(id /* block */)arg5;
- (void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(bool)arg3 completion:(id /* block */)arg4;
- (void)resolveWithRouteIdentifiers:(id)arg1 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg2 completion:(id /* block */)arg3;
- (void)resolveWithRouteIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (bool)singleGroup;

@end


@interface CRKConcreteNetworkPrimitives : NSObject <CRKNetworkPrimitives>

+ (id)makePathMonitorForInterfaceType:(int)arg1;

- (id)ethernetNetworkPathMonitor;
- (id)wifiNetworkPathMonitor;

@end

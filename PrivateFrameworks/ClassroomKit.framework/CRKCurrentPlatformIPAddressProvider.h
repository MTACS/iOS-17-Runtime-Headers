
@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding> {
    NSObject<CRKNetworkPathMonitor> * _pathMonitor;
}

@property (nonatomic, readonly, copy) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<CRKNetworkPathMonitor> *pathMonitor;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingIPAddress;
+ (id)makePathMonitorWithPrimitives:(id)arg1;

- (void).cxx_destruct;
- (id)IPAddress;
- (id)init;
- (id)initWithNetworkPrimitives:(id)arg1;
- (id)pathMonitor;

@end

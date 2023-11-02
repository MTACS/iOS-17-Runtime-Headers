
@interface NPKIDVRemoteDeviceServiceContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _eventsToServiceNames;
    NSString * _remoteDeviceID;
}

@property (nonatomic, readonly) NSString *remoteDeviceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_registeredEventsForServiceName:(id)arg1;
- (id)_serviceNamesForEventString:(id)arg1;
- (void)_setServiceNames:(id)arg1 forEventString:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)registerEvents:(unsigned long long)arg1 forServiceName:(id)arg2;
- (id)remoteDeviceID;
- (id)serviceNamesForEvent:(unsigned long long)arg1;
- (unsigned long long)unregisterEvents:(unsigned long long)arg1 forServiceName:(id)arg2;

@end

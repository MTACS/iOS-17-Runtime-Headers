
@interface SUSUIServiceManager : NSObject {
    bool  _initialized;
    NSMutableDictionary * _registeredServices;
}

@property bool initialized;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (Class)classForService:(Class)arg1;
- (Class)classForServiceName:(id)arg1;
- (id)init;
- (void)initialize;
- (bool)initialized;
- (bool)isServiceRegistered:(id)arg1;
- (id)mockedServicesMap;
- (void)registerMockClasses;
- (void)registerServiceWithName:(id)arg1 forServiceClass:(Class)arg2;
- (void)reset;
- (void)setInitialized:(bool)arg1;

@end

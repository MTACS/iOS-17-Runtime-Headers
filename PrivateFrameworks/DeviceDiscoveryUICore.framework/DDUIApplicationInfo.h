
@interface DDUIApplicationInfo : NSObject {
    unsigned long long  _adamID;
    NSString * _appName;
    NSString * _applicationID;
    NSString * _bundleID;
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly) unsigned long long adamID;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleIDPrefixedServiceIdentifier;
@property (nonatomic, readonly) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (unsigned long long)adamID;
- (id)appName;
- (id)applicationID;
- (id)bundleID;
- (id)bundleIDPrefixedServiceIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithApplicationID:(id)arg1 serviceIdentifier:(id)arg2 bundleID:(id)arg3 appName:(id)arg4 adamID:(unsigned long long)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)serviceIdentifier;

@end

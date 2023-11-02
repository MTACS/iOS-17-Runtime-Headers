
@interface HUNearbyDevice : NSObject {
    NSString * _identifierWithoutDevice;
    IDSDevice * _idsDevice;
    NSMutableArray * _registeredDomains;
    NSMutableDictionary * _state;
    NSMutableArray * _updateDomains;
}

@property (nonatomic, retain) NSString *identifierWithoutDevice;
@property (nonatomic, retain) IDSDevice *idsDevice;
@property (nonatomic, retain) NSMutableArray *registeredDomains;
@property (nonatomic, retain) NSMutableDictionary *state;
@property (nonatomic, retain) NSMutableArray *updateDomains;

+ (id)nearbyDeviceWithIDSDevice:(id)arg1;
+ (id)nearbyDeviceWithIDSIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)deviceTypeDescription;
- (bool)equalsToIdentifier:(id)arg1;
- (id)identifier;
- (id)identifierWithoutDevice;
- (id)idsDevice;
- (id)initWithIDSDevice:(id)arg1;
- (id)initWithIDSIdentifier:(id)arg1;
- (bool)isCompanion;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)registeredDomains;
- (bool)representsAWatch;
- (void)setIdentifierWithoutDevice:(id)arg1;
- (void)setIdsDevice:(id)arg1;
- (void)setRegisteredDomains:(id)arg1;
- (void)setState:(id)arg1;
- (void)setState:(id)arg1 forDomain:(id)arg2;
- (void)setUpdateDomains:(id)arg1;
- (id)state;
- (id)stateForDomain:(id)arg1;
- (id)uniqueIdentifier;
- (id)updateDomains;

@end

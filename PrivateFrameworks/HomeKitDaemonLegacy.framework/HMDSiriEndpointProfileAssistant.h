
@interface HMDSiriEndpointProfileAssistant : HMFObject <NSSecureCoding> {
    NSNumber * _active;
    NSNumber * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    HMDService * _service;
}

@property (copy) NSNumber *active;
@property (readonly) NSArray *allCharacteristics;
@property (readonly) NSArray *characteristicsToMonitor;
@property (copy) NSNumber *identifier;
@property (copy) NSString *name;
@property (readonly) HMDService *service;

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activeCharacteristic;
- (id)_identifierCharacteristic;
- (id)_nameCharacteristic;
- (id)active;
- (id)allCharacteristics;
- (id)characteristicsToMonitor;
- (bool)containsCharacteristic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)name;
- (id)service;
- (void)setActive:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (bool)updateCharacteristic:(id)arg1 value:(id)arg2;

@end

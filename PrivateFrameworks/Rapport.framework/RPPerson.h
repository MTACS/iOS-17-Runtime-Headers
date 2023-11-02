
@interface RPPerson : NSObject <NSSecureCoding> {
    int  _activityLevel;
    NSString * _contactID;
    NSMutableDictionary * _deviceDict;
    NSArray * _devices;
    unsigned int  _flags;
    NSString * _identifier;
    NSString * _name;
    int  _proximity;
    CURangingMeasurement * _relativeLocation;
}

@property (nonatomic, readonly) int activityLevel;
@property (nonatomic, readonly, copy) NSString *contactID;
@property (nonatomic, retain) NSMutableDictionary *deviceDict;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int proximity;
@property (retain) CURangingMeasurement *relativeLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_updateDeviceDerivedInfo;
- (int)activityLevel;
- (id)contactID;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceDict;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (int)proximity;
- (id)relativeLocation;
- (unsigned int)removeRPDevice:(id)arg1;
- (void)setDeviceDict:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRelativeLocation:(id)arg1;
- (unsigned int)updateWithRPDevice:(id)arg1;

@end

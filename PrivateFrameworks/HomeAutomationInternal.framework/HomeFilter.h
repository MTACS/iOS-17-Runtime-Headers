
@interface HomeFilter : INObject

@property (nonatomic) long long deviceType;
@property (nonatomic, copy) NSArray *entityIdentifiers;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) long long entityType;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSNumber *hasAllQuantifier;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, retain) NSNumber *isExcludeFilter;
@property (nonatomic, copy) NSString *outerDeviceName;
@property (nonatomic) long long outerDeviceType;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end

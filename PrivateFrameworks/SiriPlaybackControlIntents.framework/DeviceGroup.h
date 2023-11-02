
@interface DeviceGroup : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *excludeGroup;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSNumber *includesTVs;
@property (nonatomic, copy) NSArray *streams;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end

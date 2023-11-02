
@interface DeviceQuery : INObject

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *deviceTypeCategories;
@property (nonatomic, copy) NSString *deviceTypeOriginalInput;
@property (nonatomic, copy) NSString *productType;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
